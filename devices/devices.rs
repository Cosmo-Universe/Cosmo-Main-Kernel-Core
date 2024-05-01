use sysfs_class::{Device, Class};

fn main() {
  // Get the list of all devices in the system
  let devices = Class::new("device").unwrap().get_devices().unwrap();

  // Iterate over each device and print its information
  for device in devices {
    println!("Device: {}", device.name().unwrap());
    println!("  Path: {}", device.path().display());
    println!("  Subsystem: {}", device.subsystem().unwrap());
    println!("  Driver: {}", device.driver().unwrap_or("Unknown"));
    println!();
  }
}
