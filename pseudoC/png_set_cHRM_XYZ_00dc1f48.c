// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_cHRM_XYZ
// Entry Point: 00dc1f48
// Size: 452 bytes
// Signature: undefined png_set_cHRM_XYZ(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


void png_set_cHRM_XYZ(undefined param_1 [16],undefined8 param_2,undefined8 param_3,
                     undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,
                     undefined8 param_8,long param_9_00,long param_10)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 param_9;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  long local_a8;
  
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  uVar2 = png_fixed(param_9_00,"cHRM Red X");
  uVar3 = png_fixed(param_2,param_9_00,"cHRM Red Y");
  uVar4 = png_fixed(param_3,param_9_00,"cHRM Red Z");
  uVar5 = png_fixed(param_4,param_9_00,"cHRM Green X");
  uVar6 = png_fixed(param_5,param_9_00,"cHRM Green Y");
  uVar7 = png_fixed(param_6,param_9_00,"cHRM Green Z");
  uVar8 = png_fixed(param_7,param_9_00,"cHRM Blue X");
  uVar9 = png_fixed(param_8,param_9_00,"cHRM Blue Y");
  uVar10 = png_fixed(param_9,param_9_00,"cHRM Blue Z");
  if ((param_9_00 != 0) && (param_10 != 0)) {
    local_d0 = uVar2;
    uStack_cc = uVar3;
    local_c8 = uVar4;
    uStack_c4 = uVar5;
    local_c0 = uVar6;
    uStack_bc = uVar7;
    local_b8 = uVar8;
    uStack_b4 = uVar9;
    local_b0 = uVar10;
    iVar11 = png_colorspace_set_endpoints(param_9_00,param_10 + 0x34,&local_d0,2);
    if (iVar11 != 0) {
      *(ushort *)(param_10 + 0x7e) = *(ushort *)(param_10 + 0x7e) | 0x10;
    }
    png_colorspace_sync_info(param_9_00,param_10);
  }
  if (*(long *)(lVar1 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


