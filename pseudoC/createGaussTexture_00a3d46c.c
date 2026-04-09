// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createGaussTexture
// Entry Point: 00a3d46c
// Size: 552 bytes
// Signature: undefined __thiscall createGaussTexture(ScreenSpaceProcessor * this, IRenderDevice * param_1, uint param_2, float param_3, ITextureObject * * param_4)


/* ScreenSpaceProcessor::createGaussTexture(IRenderDevice*, unsigned int, float, ITextureObject*&)
    */

void __thiscall
ScreenSpaceProcessor::createGaussTexture
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,uint param_2,float param_3,
          ITextureObject **param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ITextureObject *pIVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  void *local_f0;
  undefined2 local_e8;
  undefined8 local_e4;
  uint local_dc;
  undefined4 uStack_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  char *local_a0;
  long local_98;
  
  fVar13 = param_3 + param_3;
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  fVar10 = expf(0.0 / fVar13);
  fVar14 = fVar10 + 0.0;
  if (0 < (int)param_2) {
    if (param_2 == 1) {
      uVar8 = 1;
    }
    else {
      uVar9 = 0;
      uVar8 = param_2 | 1;
      do {
        iVar1 = uVar9 + 1;
        uVar9 = uVar9 + 2;
        fVar12 = expf((float)-(iVar1 * iVar1) / fVar13);
        fVar11 = expf((float)-(uVar9 * uVar9) / fVar13);
        fVar14 = fVar14 + fVar12 + fVar12 + fVar11 + fVar11;
      } while ((param_2 & 0xfffffffe) != uVar9);
      if ((param_2 & 0xfffffffe) == param_2) goto LAB_00a3d560;
    }
    do {
      fVar12 = expf((float)-(uVar8 * uVar8) / fVar13);
      fVar14 = (float)NEON_fmadd(fVar12,0x40000000,fVar14);
      uVar8 = uVar8 + 1;
    } while (param_2 + 1 != uVar8);
  }
LAB_00a3d560:
  uVar9 = param_2 << 1 | 1;
  pvVar4 = operator_new__((ulong)uVar9 << 2);
  uVar8 = param_2 - 1;
  *(float *)((long)pvVar4 + (ulong)param_2 * 4) = fVar10 / fVar14;
  if (0 < (int)param_2) {
    lVar7 = 0;
    do {
      lVar2 = lVar7 + 1;
      fVar10 = expf((float)-((int)lVar2 * (int)lVar2) / fVar13);
      *(float *)((long)pvVar4 + (ulong)(param_2 + 1 + (int)lVar7) * 4) = fVar10 / fVar14;
      *(float *)((long)pvVar4 + (ulong)uVar8 * 4) = fVar10 / fVar14;
      uVar8 = uVar8 - 1;
      lVar7 = lVar2;
    } while ((ulong)(param_2 + 1) - 1 != lVar2);
  }
  local_e8 = 0;
  local_d4 = 0x100000001;
  local_c8 = 0x1700000004;
  local_cc = 0;
  local_a4 = 0;
  local_bc = 0x100000001;
  uStack_d8 = 1;
  uStack_ac = 0x3f80000000000000;
  local_b4 = 0;
  local_e4 = 0xffffffff00000000;
  local_c0 = 0;
  local_a0 = "ScreenSpaceProcessor gaussian texture";
  local_f0 = pvVar4;
  local_dc = uVar9;
  uVar5 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  pIVar6 = (ITextureObject *)(**(code **)(*(long *)param_1 + 0x100))(param_1,uVar5,&local_f0);
  *param_4 = pIVar6;
  operator_delete__(pvVar4);
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


