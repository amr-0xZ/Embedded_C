Write a C program that initializes, manipulates, and displays an 8-bit unsigned sensor reading.

Initialize the Data:

Declare a variable named raw_sensor_value that is specifically designed to hold an 8-bit unsigned integer. (Use unsigned char or uint8_t if you know it, otherwise, stick with unsigned char as it's guaranteed to be at least 8 bits).

Set its initial value to 175 (decimal).

Analyze the Data:

The sensor specification states that any value above 200 indicates an overheat warning.

Declare a signed integer variable named temperature_difference.

Calculate the difference between the actual value and the warning threshold (200), and store the result in temperature_difference.

Output and Documentation:

Print the initial raw_sensor_value.

Print the calculated temperature_difference. (It should be a negative number, demonstrating your use of a signed variable).

Include a brief block comment at the top explaining the purpose of the code.

Use single-line comments to explain why you chose the data types for both raw_sensor_value and temperature_difference.
