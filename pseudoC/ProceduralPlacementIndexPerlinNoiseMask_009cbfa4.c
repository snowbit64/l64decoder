// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementIndexPerlinNoiseMask
// Entry Point: 009cbfa4
// Size: 688 bytes
// Signature: undefined __thiscall ProceduralPlacementIndexPerlinNoiseMask(ProceduralPlacementIndexPerlinNoiseMask * this, uint param_1, uint param_2, float param_3)


/* ProceduralPlacementIndexPerlinNoiseMask::ProceduralPlacementIndexPerlinNoiseMask(unsigned int,
   unsigned int, float) */

void __thiscall
ProceduralPlacementIndexPerlinNoiseMask::ProceduralPlacementIndexPerlinNoiseMask
          (ProceduralPlacementIndexPerlinNoiseMask *this,uint param_1,uint param_2,float param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  ushort local_d0;
  void *local_c0;
  ushort local_b8;
  void *local_a8;
  byte local_a0;
  undefined uStack_9f;
  undefined6 uStack_9e;
  undefined8 uStack_98;
  void *local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  local_a0 = 0;
  uStack_9f = 0;
  local_b8 = 0;
  local_d0 = 0;
                    /* try { // try from 009cbff4 to 009cc003 has its CatchHandler @ 009cc258 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_a0,(basic_string *)&local_b8,
             (basic_string *)&local_d0);
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  *(undefined ***)this = &PTR__ProceduralPlacementIndexPerlinNoiseMask_00fe2168;
                    /* try { // try from 009cc034 to 009cc047 has its CatchHandler @ 009cc254 */
  getIndexPerlinNoiseMaskSignature(param_1,param_2,param_3);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  *(uint *)(this + 200) = param_1;
  *(uint *)(this + 0xcc) = param_2;
  *(float *)(this + 0xd0) = param_3;
  *(undefined8 *)(this + 0x78) = uStack_98;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0));
  *(void **)(this + 0x80) = local_90;
  *(undefined8 *)(this + 0x50) = 0x80000000800;
                    /* try { // try from 009cc084 to 009cc08b has its CatchHandler @ 009cc2a8 */
  pvVar3 = operator_new__((ulong)param_1 << 2);
  *(void **)(this + 0xd8) = pvVar3;
  memset(pvVar3,0,(ulong)param_1 << 2);
                    /* try { // try from 009cc09c to 009cc0cf has its CatchHandler @ 009cc2a8 */
  pvVar3 = operator_new__(0x1000000);
  puVar6 = (undefined8 *)((long)pvVar3 + 0x10);
  lVar10 = 0x400000;
  *(void **)(this + 0x58) = pvVar3;
  do {
    puVar6[-1] = 0x437f0000437f0000;
    puVar6[-2] = 0x437f0000437f0000;
    puVar6[1] = 0x437f0000437f0000;
    *puVar6 = 0x437f0000437f0000;
    puVar6 = puVar6 + 4;
    lVar10 = lVar10 + -8;
  } while (lVar10 != 0);
  pvVar3 = operator_new__(0x1000000);
  uVar12 = 0;
  uVar4 = 0x800;
  uVar8 = 0x800;
  *(void **)(this + 0xe0) = pvVar3;
  do {
    if (uVar8 != 0) {
      uVar4 = 0;
      do {
        memset(*(void **)(this + 0xd8),0,(ulong)*(uint *)(this + 200) << 2);
        uVar8 = *(uint *)(this + 200);
        uVar7 = (ulong)uVar8;
        if (1 < uVar8) {
          pfVar11 = *(float **)(this + 0xd8);
          uVar8 = uVar8 - 1;
          iVar1 = *(int *)(this + 0xcc);
          fVar14 = *(float *)(this + 0xd0) * (float)(ulong)uVar12;
          fVar13 = *(float *)(this + 0xd0) * (float)(ulong)uVar4;
                    /* try { // try from 009cc174 to 009cc1c7 has its CatchHandler @ 009cc2ac */
          IndexPerlinNoiseUtil::addRandomIndexWeights(pfVar11,fVar13,fVar14,uVar8,1.0,iVar1);
          IndexPerlinNoiseUtil::addRandomIndexWeights
                    (pfVar11,fVar13 + fVar13,fVar14 + fVar14,uVar8,0.6,iVar1);
          IndexPerlinNoiseUtil::addRandomIndexWeights
                    (pfVar11,fVar13 * 4.0,fVar14 * 4.0,uVar8,0.3,iVar1);
          uVar9 = 0;
          uVar7 = 0;
          fVar13 = -1.0;
          do {
            uVar5 = uVar9;
            fVar14 = pfVar11[uVar9];
            if (pfVar11[uVar9] <= fVar13) {
              uVar5 = (uint)uVar7;
              fVar14 = fVar13;
            }
            fVar13 = fVar14;
            uVar7 = (ulong)uVar5;
            uVar9 = uVar9 + 1;
          } while (uVar9 <= uVar8);
        }
        uVar8 = *(uint *)(this + 0x50);
        uVar9 = uVar4 + uVar8 * uVar12;
        uVar4 = uVar4 + 1;
        *(float *)(*(long *)(this + 0xe0) + (ulong)uVar9 * 4) = (float)uVar7;
      } while (uVar4 < uVar8);
      uVar4 = *(uint *)(this + 0x54);
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < uVar4);
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


