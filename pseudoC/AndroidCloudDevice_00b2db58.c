// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AndroidCloudDevice
// Entry Point: 00b2db58
// Size: 232 bytes
// Signature: undefined __thiscall AndroidCloudDevice(AndroidCloudDevice * this, char * param_1)


/* AndroidCloudDevice::AndroidCloudDevice(char const*) */

void __thiscall AndroidCloudDevice::AndroidCloudDevice(AndroidCloudDevice *this,char *param_1)

{
  AndroidCloudDevice *pAVar1;
  int iVar2;
  AndroidJNICall *this_00;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__AndroidCloudDevice_00fe93d0;
                    /* try { // try from 00b2db90 to 00b2db97 has its CatchHandler @ 00b2dc68 */
  this_00 = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00b2db9c to 00b2dba3 has its CatchHandler @ 00b2dc54 */
  AndroidJNICall::AndroidJNICall(this_00,1);
  *(AndroidJNICall **)(this + 0x38) = this_00;
  this[0x40] = (AndroidCloudDevice)0x0;
  pAVar1 = this;
  if (s_pAndroidCloudDevice != (AndroidCloudDevice *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b2dc08 to 00b2dc13 has its CatchHandler @ 00b2dc40 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00b2dbcc to 00b2dbdf has its CatchHandler @ 00b2dc68 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "s_pAndroidCloudDevice already set!\n");
    pAVar1 = s_pAndroidCloudDevice;
  }
  s_pAndroidCloudDevice = pAVar1;
  return;
}


