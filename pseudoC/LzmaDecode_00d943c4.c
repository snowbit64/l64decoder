// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaDecode
// Entry Point: 00d943c4
// Size: 532 bytes
// Signature: undefined LzmaDecode(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


undefined4
LzmaDecode(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4,byte *param_5,
          uint param_6,undefined4 param_7,int *param_8,code **param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_9c;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  uVar11 = *param_4;
  uVar9 = *param_2;
  *param_2 = 0;
  *param_4 = 0;
  if (uVar11 < 5) {
    uVar7 = 6;
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  else {
    if (4 < param_6) {
      uVar3 = *(uint *)(param_5 + 1);
      bVar4 = *param_5;
      if (uVar3 < 0x1001) {
        uVar3 = 0x1000;
      }
      if (bVar4 < 0xe1) {
        uVar10 = (uint)bVar4;
        uVar5 = (bVar4 / 9) % 5;
        uVar2 = uVar10 + (bVar4 / 9) * -9 & 0xff;
        uVar1 = (0x300 << (ulong)(uVar5 + uVar2 & 0x1f)) + 0x736;
        (*param_9[1])(param_9,0);
        local_e8 = (**param_9)(param_9,(ulong)uVar1 << 1);
        local_90 = uVar1;
        if (local_e8 == 0) {
          if (*(long *)(lVar8 + 0x28) == local_70) {
            return 2;
          }
        }
        else {
          uVar7 = 1;
          uVar1 = uVar10 * 0x6d >> 8;
          local_f0 = uVar1 + ((uVar10 - uVar1 & 0xfe) >> 1) >> 5;
          local_c8 = 0;
          local_b8 = 0;
          local_8c = 0;
          local_94 = 1;
          local_9c = 0x100000000;
          *param_4 = uVar11;
          local_f8 = uVar2;
          uStack_f4 = uVar5;
          uStack_ec = uVar3;
          local_e0 = param_1;
          uStack_c0 = uVar9;
          iVar6 = LzmaDec_DecodeToDic(&local_f8,uVar9,param_3,param_4,param_7,param_8);
          if ((iVar6 == 0) && (uVar7 = 6, *param_8 != 3)) {
            uVar7 = 0;
          }
          *param_2 = local_c8;
          (*param_9[1])(param_9,local_e8);
          if (*(long *)(lVar8 + 0x28) == local_70) {
            return uVar7;
          }
        }
        goto LAB_00d94478;
      }
    }
    uVar7 = 4;
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  if (lVar8 == local_70) {
    return uVar7;
  }
LAB_00d94478:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


