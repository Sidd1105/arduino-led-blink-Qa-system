# LED Blink Test Report

## Test Cases

| TC | Test | Expected | Actual | Pass/Fail |
|---|---|---|---|---|
| 1 | Upload code | Compiles without error | Code uploaded successfully | Pass |
| 2 | LED blink rate | 1 s ON / 1 s OFF | LED blinks approximately every 1 second | Pass |
| 3 | Serial monitor | Prints ON/OFF | ON/OFF messages displayed | Pass |
| 4 | Non-blocking check | Loop runs freely | Loop runs without delay() blocking | Pass |

## Test Summary

All planned test cases passed successfully.

The LED blink functionality and non-blocking timing were verified.
