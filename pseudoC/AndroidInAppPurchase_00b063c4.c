// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AndroidInAppPurchase
// Entry Point: 00b063c4
// Size: 116 bytes
// Signature: undefined __thiscall AndroidInAppPurchase(AndroidInAppPurchase * this, char * param_1, NetworkAvailability * param_2)


/* AndroidInAppPurchase::AndroidInAppPurchase(char const*, NetworkAvailability*) */

void __thiscall
AndroidInAppPurchase::AndroidInAppPurchase
          (AndroidInAppPurchase *this,char *param_1,NetworkAvailability *param_2)

{
  AndroidJNICall *this_00;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
                    /* try { // try from 00b06400 to 00b06407 has its CatchHandler @ 00b06478 */
  this_00 = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00b0640c to 00b06413 has its CatchHandler @ 00b06438 */
  AndroidJNICall::AndroidJNICall(this_00,3);
  *(AndroidJNICall **)this = this_00;
  *(NetworkAvailability **)(this + 8) = param_2;
  m_pInstance = this;
  return;
}


