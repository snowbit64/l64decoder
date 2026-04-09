// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readLocalFile
// Entry Point: 00b2f148
// Size: 236 bytes
// Signature: undefined __thiscall readLocalFile(AndroidCloudDevice * this, Session * param_1, char * param_2, char * * param_3, uchar * * param_4, uint * param_5)


/* AndroidCloudDevice::readLocalFile(ICloudDevice::Session*, char const*, char const*&, unsigned
   char*&, unsigned int&) */

uint __thiscall
AndroidCloudDevice::readLocalFile
          (AndroidCloudDevice *this,Session *param_1,char *param_2,char **param_3,uchar **param_4,
          uint *param_5)

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
  *param_4 = (uchar *)0x0;
  *param_5 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (char *)0x0;
  local_54 = 1;
                    /* try { // try from 00b2f198 to 00b2f1ef has its CatchHandler @ 00b2f234 */
  AndroidJNICall::callStringFromStringIntByteArrayrefIntref
            (*(AndroidJNICall **)(this + 0x38),"readLocalFile",(basic_string *)&local_50,param_2,
             *(uint *)(param_1 + 0x20),param_4,param_5,&local_54);
  if (local_54 == 0) {
    pcVar3 = (char *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      pcVar3 = local_40;
    }
    pcVar3 = (char *)StringUtil::createStrCpy(pcVar3);
    *param_3 = pcVar3;
  }
  else {
    if (*param_4 != (uchar *)0x0) {
      operator_delete__(*param_4);
    }
    *param_4 = (uchar *)0x0;
    *param_5 = 0;
  }
  uVar2 = local_54;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


