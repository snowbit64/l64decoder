// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveFileWithRemote
// Entry Point: 00b2f064
// Size: 200 bytes
// Signature: undefined __thiscall resolveFileWithRemote(AndroidCloudDevice * this, Session * param_1, char * param_2, char * * param_3)


/* AndroidCloudDevice::resolveFileWithRemote(ICloudDevice::Session*, char const*, char const*&) */

uint __thiscall
AndroidCloudDevice::resolveFileWithRemote
          (AndroidCloudDevice *this,Session *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  uint local_54;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (char *)0x0;
  local_54 = 1;
                    /* try { // try from 00b2f0a4 to 00b2f113 has its CatchHandler @ 00b2f12c */
  AndroidJNICall::callStringFromStringIntIntref
            (*(AndroidJNICall **)(this + 0x38),"resolveFileWithRemote",(basic_string *)&local_50,
             param_2,*(uint *)(param_1 + 0x20),&local_54);
  uVar2 = local_54;
  if (local_54 == 0) {
    pcVar3 = (char *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      pcVar3 = local_40;
    }
    pcVar3 = (char *)StringUtil::createStrCpy(pcVar3);
    *param_3 = pcVar3;
    uVar2 = local_54;
  }
  local_54 = uVar2;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


