// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementPerlinNoiseMask
// Entry Point: 009da29c
// Size: 440 bytes
// Signature: undefined __thiscall ProceduralPlacementPerlinNoiseMask(ProceduralPlacementPerlinNoiseMask * this, uint param_1, float param_2, float param_3, uint param_4)


/* ProceduralPlacementPerlinNoiseMask::ProceduralPlacementPerlinNoiseMask(unsigned int, float,
   float, unsigned int) */

void __thiscall
ProceduralPlacementPerlinNoiseMask::ProceduralPlacementPerlinNoiseMask
          (ProceduralPlacementPerlinNoiseMask *this,uint param_1,float param_2,float param_3,
          uint param_4)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  ushort local_a0;
  void *local_90;
  ushort local_88;
  void *local_78;
  byte local_70;
  undefined uStack_6f;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = 0;
  uStack_6f = 0;
  local_88 = 0;
  local_a0 = 0;
                    /* try { // try from 009da2e4 to 009da2f3 has its CatchHandler @ 009da45c */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_70,(basic_string *)&local_88,
             (basic_string *)&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  *(undefined ***)this = &PTR__ProceduralPlacementPerlinNoiseMask_00fe2570;
                    /* try { // try from 009da324 to 009da33b has its CatchHandler @ 009da458 */
  getPerlinNoiseMaskSignature(param_1,param_2,param_3,param_4);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  *(uint *)(this + 200) = param_1;
  *(float *)(this + 0xcc) = param_3;
  *(undefined8 *)(this + 0x78) = uStack_68;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_6e,CONCAT11(uStack_6f,local_70));
  *(void **)(this + 0x80) = local_60;
  *(float *)(this + 0xd0) = param_2;
  *(uint *)(this + 0xd4) = param_4;
  *(undefined8 *)(this + 0x50) = 0x80000000800;
                    /* try { // try from 009da378 to 009da37f has its CatchHandler @ 009da454 */
  pvVar3 = operator_new__(0x1000000);
  uVar6 = 0;
  uVar5 = 0x800;
  uVar4 = 0x800;
  *(void **)(this + 0xd8) = pvVar3;
  do {
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
                    /* try { // try from 009da3d0 to 009da3d3 has its CatchHandler @ 009da4ac */
        uVar7 = PerlinNoiseUtil::getPerlinNoise2D
                          (*(float *)(this + 0xd0) * (float)(ulong)uVar5,
                           *(float *)(this + 0xd0) * (float)(ulong)uVar6,*(float *)(this + 0xcc),
                           *(uint *)(this + 0xd4),*(int *)(this + 200));
        fVar8 = (float)NEON_fmadd(uVar7,0x3f000000,0x3f000000);
        uVar4 = *(uint *)(this + 0x50);
        uVar1 = uVar5 + uVar6 * uVar4;
        uVar5 = uVar5 + 1;
        *(float *)(*(long *)(this + 0xd8) + (ulong)uVar1 * 4) = fVar8 * 255.0;
      } while (uVar5 < uVar4);
      uVar5 = *(uint *)(this + 0x54);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < uVar5);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


