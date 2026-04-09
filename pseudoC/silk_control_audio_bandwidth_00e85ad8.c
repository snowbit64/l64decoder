// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_control_audio_bandwidth
// Entry Point: 00e85ad8
// Size: 388 bytes
// Signature: undefined silk_control_audio_bandwidth(void)


uint silk_control_audio_bandwidth(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x11e0);
  if (uVar4 == 0) {
    uVar4 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar4 & 0xffff) == 0) {
    iVar5 = *(int *)(param_1 + 0x11dc);
    if (*(int *)(param_1 + 0x11cc) <= *(int *)(param_1 + 0x11dc)) {
      iVar5 = *(int *)(param_1 + 0x11cc);
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x11cc);
    iVar2 = (short)uVar4 * 1000;
    iVar1 = *(int *)(param_1 + 0x11d4);
    bVar3 = false;
    if (iVar2 <= iVar5) {
      bVar3 = iVar2 - iVar1 < 0;
    }
    if ((iVar2 <= iVar5 && iVar2 == iVar1 || bVar3 != (iVar2 <= iVar5 && SBORROW4(iVar2,iVar1))) &&
       (*(int *)(param_1 + 0x11d8) <= iVar2)) {
      if (0xff < *(int *)(param_1 + 0x18)) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      if ((*(int *)(param_1 + 0x11b8) != 0) || (*(int *)(param_2 + 0x40) != 0)) {
        if (*(int *)(param_1 + 0x11dc) < iVar2) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            iVar5 = *(int *)(param_2 + 0x40);
            *(undefined4 *)(param_1 + 0x18) = 0x100;
            if (iVar5 != 0) goto LAB_00e85c00;
          }
          else {
            if (*(int *)(param_2 + 0x40) != 0) {
LAB_00e85c00:
              *(undefined4 *)(param_1 + 0x1c) = 0;
              uVar6 = 0xc;
              if (uVar4 != 0x10) {
                uVar6 = 8;
              }
              return uVar6;
            }
            if (*(int *)(param_1 + 0x18) < 1) goto LAB_00e85c34;
          }
          uVar7 = 0xfffffffe;
        }
        else {
          if (iVar2 < *(int *)(param_1 + 0x11dc)) {
            if (*(int *)(param_2 + 0x40) != 0) {
              uVar6 = 0xc;
              if (uVar4 != 8) {
                uVar6 = 0x10;
              }
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined8 *)(param_1 + 0x18) = 0x100000000;
              return uVar6;
            }
            if (*(int *)(param_1 + 0x1c) == 0) {
LAB_00e85c34:
              iVar5 = *(int *)(param_2 + 0x18) + 5;
              iVar1 = 0;
              if (iVar5 != 0) {
                iVar1 = (*(int *)(param_2 + 0x38) * 5) / iVar5;
              }
              *(undefined4 *)(param_2 + 0x58) = 1;
              *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) - iVar1;
              return uVar4;
            }
          }
          else if (-1 < *(int *)(param_1 + 0x1c)) {
            return uVar4;
          }
          uVar7 = 1;
        }
        *(undefined4 *)(param_1 + 0x1c) = uVar7;
      }
      return uVar4;
    }
    if (iVar1 <= iVar5) {
      iVar5 = iVar1;
    }
    if (iVar5 <= *(int *)(param_1 + 0x11d8)) {
      iVar5 = *(int *)(param_1 + 0x11d8);
    }
  }
  return iVar5 / 1000;
}


