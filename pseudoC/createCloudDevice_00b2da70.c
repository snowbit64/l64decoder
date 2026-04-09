// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCloudDevice
// Entry Point: 00b2da70
// Size: 116 bytes
// Signature: undefined __cdecl createCloudDevice(CLOUD_DEVICE_TYPE param_1, char * param_2, NetworkAvailability * param_3)


/* CloudDeviceManager::createCloudDevice(CloudDeviceManager::CLOUD_DEVICE_TYPE, char const*,
   NetworkAvailability*) */

long * CloudDeviceManager::createCloudDevice
                 (CLOUD_DEVICE_TYPE param_1,char *param_2,NetworkAvailability *param_3)

{
  long *this;
  
  this = s_cloudDeviceManager;
  if (s_cloudDeviceManager == (long *)0x0) {
    if (param_1 == 1) {
      this = (long *)operator_new(0x48);
                    /* try { // try from 00b2daa8 to 00b2daaf has its CatchHandler @ 00b2dae4 */
      AndroidCloudDevice::AndroidCloudDevice((AndroidCloudDevice *)this,param_2);
      if (s_cloudDeviceManager != (long *)0x0) {
        (**(code **)(*s_cloudDeviceManager + 8))();
      }
    }
    else {
      this = (long *)0x0;
    }
  }
  s_cloudDeviceManager = this;
  return s_cloudDeviceManager;
}


