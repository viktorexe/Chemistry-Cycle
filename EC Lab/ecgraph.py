import matplotlib.pyplot as plt
import numpy as np

# Data
volumes = np.arange(0, 5.9, 0.2)  # Volume of NaOH added from 0 to 5.8 mL
pH_values = [3.92, 3.97, 4.06, 4.12, 4.27, 4.35, 4.47, 4.60, 4.74, 4.95, 
             5.13, 5.33, 5.67, 6.02, 6.54, 7.52, 7.91, 8.32, 8.72, 9.03, 
             9.12, 9.31, 9.49, 9.66, 9.83, 9.89, 10.11, 10.24, 10.35, 10.45]

# Calculate dpH/dV
dpH_dV = [((pH_values[i] - pH_values[i-1]) / (volumes[i] - volumes[i-1])) for i in range(1, len(volumes))]

# Adjust volumes for dpH/dV to match the number of calculated values
volumes_dpH_dV = volumes[1:]

# Plotting
plt.figure(figsize=(10, 6))

# Plot pH vs Volume
plt.subplot(2, 1, 1)
plt.plot(volumes, pH_values, marker='o', color='b', label='pH')
plt.title('pH vs Volume of NaOH added')
plt.xlabel('Volume of NaOH added (mL)')
plt.ylabel('pH')
plt.grid(True)
plt.legend()

# Plot dpH/dV vs Volume
plt.subplot(2, 1, 2)
plt.plot(volumes_dpH_dV, dpH_dV, marker='o', color='r', label='dpH/dV')
plt.title('dpH/dV vs Volume of NaOH added')
plt.xlabel('Volume of NaOH added (mL)')
plt.ylabel('dpH/dV')
plt.grid(True)
plt.legend()

plt.tight_layout()
plt.show()