// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParameterMatrixf
// Entry Point: 00aa9e7c
// Size: 152 bytes
// Signature: undefined __cdecl setParameterMatrixf(float * param_1, ushort param_2, Matrix4x4 * param_3)


/* ShaderStructLayout::setParameterMatrixf(float*, unsigned short, Matrix4x4 const&) */

void ShaderStructLayout::setParameterMatrixf(float *param_1,ushort param_2,Matrix4x4 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_60;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  puVar1 = (undefined8 *)(param_1 + param_2);
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  uStack_54 = (undefined4)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
  local_50._0_4_ = (undefined4)*(undefined8 *)(param_3 + 0x10);
  uStack_3c = (undefined4)((ulong)uVar9 >> 0x20);
  local_60._4_4_ = (undefined4)((ulong)*(undefined8 *)param_3 >> 0x20);
  uVar4 = local_60._4_4_;
  local_60 = CONCAT44((undefined4)local_50,(int)*(undefined8 *)param_3);
  uStack_48._0_4_ = (undefined4)*(undefined8 *)(param_3 + 0x18);
  uStack_48._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  uVar5 = uStack_48._4_4_;
  uVar3 = CONCAT44((undefined4)uStack_48,(int)*(undefined8 *)(param_3 + 8));
  uStack_38._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
  local_30._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
  uStack_28._0_4_ = (undefined4)*(undefined8 *)(param_3 + 0x38);
  uVar7 = (undefined4)uStack_28;
  local_30._0_4_ = (undefined4)*(undefined8 *)(param_3 + 0x30);
  uVar6 = (undefined4)local_30;
  uStack_28 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20),uStack_38._4_4_);
  uStack_48 = CONCAT44(local_30._4_4_,uStack_3c);
  uStack_38 = CONCAT44(uVar7,(int)*(undefined8 *)(param_3 + 0x28));
  local_30 = CONCAT44(uVar5,uStack_54);
  local_50 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20),uVar4);
  puVar1[5] = uStack_38;
  puVar1[4] = uVar3;
  puVar1[7] = uStack_28;
  puVar1[6] = local_30;
  puVar1[1] = CONCAT44(uVar6,(int)uVar9);
  *puVar1 = local_60;
  puVar1[3] = uStack_48;
  puVar1[2] = local_50;
  if (*(long *)(lVar2 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


