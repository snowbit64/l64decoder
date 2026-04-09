// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_encode
// Entry Point: 00e819a8
// Size: 352 bytes
// Signature: undefined opus_encode(void)


void opus_encode(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 / 400 <= param_3) {
    uVar1 = *(uint *)(param_1 + 0x9c);
    iVar4 = param_3;
    if (uVar1 == 5000) {
LAB_00e81a48:
      if ((((((iVar4 * 400 == iVar2) || (iVar4 * 200 == iVar2)) || (iVar4 * 100 == iVar2)) ||
           ((iVar3 = iVar4 * 0x32, iVar3 == iVar2 || (iVar4 * 0x19 == iVar2)))) ||
          ((iVar3 == iVar2 * 3 || ((iVar3 == iVar2 * 4 || (iVar3 == iVar2 * 5)))))) ||
         (iVar3 == iVar2 * 6)) goto LAB_00e81acc;
    }
    else if (uVar1 - 0x1389 < 9) {
      if (uVar1 >> 1 < 0x9c7) {
        iVar4 = iVar2 / 400 << (ulong)(uVar1 - 0x1389 & 0x1f);
      }
      else {
        iVar4 = (int)((uVar1 - 0x138b) * iVar2) / 0x32;
      }
      if (iVar4 <= param_3) goto LAB_00e81a48;
    }
  }
  iVar4 = -1;
LAB_00e81acc:
  opus_encode_native(param_1,param_2,iVar4,param_4,param_5,0x10,param_2,param_3,0,0xfffffffe,
                     *(undefined4 *)(param_1 + 0x70),downmix_int,0);
  return;
}


