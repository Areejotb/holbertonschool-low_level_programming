# Green Efficiency Analysis

## Measurement Methodology

All timings were produced with `clock()` from `<time.h>` and converted to seconds by dividing by `CLOCKS_PER_SEC`. The programs were compiled with `gcc -Wall -Wextra -Werror -std=gnu99` and run in a GitHub Codespace on Linux. The baseline and comparison programs were each executed at least three times, and the instrumentation program was executed once. Algorithm logic and input data were not modified. In `instrumentation_lab.c`, `TOTAL` starts before `build_dataset()` and ends after `reduce_checksum()`. Each phase has its own start and end calls, and all `printf` calls sit outside the measured regions, so printing cost is not counted in any phase.

## Observed Performance Differences

The baseline loop (100,000,000 iterations) took 0.110759 s, 0.103580 s and 0.121407 s. The average is 0.111915 s, or about 1.1 ns per iteration. The gap between the fastest and slowest run is 0.017827 s, about 16% of the average, so identical code does not give identical timings.

In the comparison program, the naive algorithm took 1.383853 s, 1.347108 s and 1.356028 s, an average of 1.362330 s. The single-pass algorithm took 0.000078 s, 0.000044 s and 0.000054 s, an average of 0.000059 s. The naive version was therefore about 23,221 times slower. This matches the code: the naive inner body runs 50000 x 50001 / 2 = 1,250,025,000 times, against 50,000 for the single pass, a work ratio of about 25,000. The two functions print different results (625025000 vs 25000) because the naive version recounts the same prefix repeatedly, so the comparison measures the amount of work done.

In the instrumentation lab, the single run gave TOTAL 0.000488 s, BUILD_DATA 0.000213 s, PROCESS 0.000190 s and REDUCE 0.000078 s. Build took about 44% of the total, process about 39% and reduce about 16%. The phases add up to 0.000481 s, which is 0.000007 s less than TOTAL. That gap is the overhead of the `clock()` calls and the code between the phases.

## Relation Between Runtime and Energy Consumption

No energy was measured in this experiment, since no power meter or hardware counter was used, so no joule values are reported. What the data shows is that `clock()` measures CPU time. The naive algorithm kept the CPU busy for about 1.36 s, while the single-pass version needed about 0.000059 s. If the processor draws similar power while executing either code, energy would scale with active time. That assumption was not tested here, so runtime is used only as a proxy for energy, not as a measurement of it.

## Limitations of the Experiment

- All runs were on one shared cloud virtual machine, and the baseline varied by about 16% between identical runs.
- The single-pass times are tens of microseconds, close to the resolution of `clock()`. The ratio is unstable: an earlier set of runs with single-pass times of about 0.000044 s gave a ratio near 30,850, against 23,221 in the recorded set.
- The instrumentation program was run once, so its phase percentages have no repetition behind them.
- No compiler optimization levels were compared, and no energy measurement was made.

## Practical Engineering Takeaway

Algorithm choice dominated everything else. Reducing the work by a factor of about 25,000 cut the time from roughly 1.36 s to 0.00006 s, far more than the 16% noise seen between identical baseline runs. Engineers should therefore pick the algorithm first, repeat measurements and report averages with their spread, and instrument phases before optimizing. In the instrumentation lab, building and processing the data took about 83% of the time, so those are the phases worth examining first. Since energy was not measured, any energy saving should be confirmed with proper measurement before it is claimed.
