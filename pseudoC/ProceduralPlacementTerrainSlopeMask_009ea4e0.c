// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementTerrainSlopeMask
// Entry Point: 009ea4e0
// Size: 424 bytes
// Signature: undefined __thiscall ProceduralPlacementTerrainSlopeMask(ProceduralPlacementTerrainSlopeMask * this, BaseTerrain * param_1)


/* ProceduralPlacementTerrainSlopeMask::ProceduralPlacementTerrainSlopeMask(BaseTerrain*) */

void __thiscall
ProceduralPlacementTerrainSlopeMask::ProceduralPlacementTerrainSlopeMask
          (ProceduralPlacementTerrainSlopeMask *this,BaseTerrain *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  void *__s;
  uint uVar5;
  ulong __n;
  uint uVar6;
  float fVar7;
  ushort local_a0;
  void *local_90;
  ushort local_88;
  void *local_78;
  float local_70;
  float fStack_6c;
  undefined4 local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = (float)((uint)local_70 & 0xffff0000);
  local_88 = 0;
  local_a0 = 0;
                    /* try { // try from 009ea51c to 009ea52b has its CatchHandler @ 009ea688 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_70,(basic_string *)&local_88,
             (basic_string *)&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (((uint)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  *(BaseTerrain **)(this + 200) = param_1;
  this[0xd0] = (ProceduralPlacementTerrainSlopeMask)0x0;
  *(undefined ***)this = &PTR__ProceduralPlacementTerrainSlopeMask_00fe2e28;
                    /* try { // try from 009ea564 to 009ea593 has its CatchHandler @ 009ea6d8 */
  uVar3 = BaseTerrain::getHeightMapSize();
  *(undefined4 *)(this + 0x50) = uVar3;
  uVar4 = BaseTerrain::getHeightMapSize();
  uVar6 = *(uint *)(this + 0x50);
  *(uint *)(this + 0x54) = uVar4;
  __n = (ulong)(uVar6 * uVar4) << 2;
  __s = operator_new__(__n);
  *(void **)(this + 0x58) = __s;
  if (uVar6 * uVar4 != 0) {
    memset(__s,0,__n);
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if (uVar6 != 0) {
        uVar4 = 0;
        do {
                    /* try { // try from 009ea5e0 to 009ea5eb has its CatchHandler @ 009ea6dc */
          BaseTerrain::getInterpolatedNormalAtPoint
                    (*(BaseTerrain **)(this + 200),(float)(ulong)uVar4,(float)(ulong)uVar5,&local_70
                    );
          uVar6 = *(uint *)(this + 0x50);
          uVar1 = uVar4 + uVar5 * uVar6;
          uVar4 = uVar4 + 1;
          uVar3 = NEON_fmadd(local_70,local_70,fStack_6c * fStack_6c);
          fVar7 = (float)NEON_fmadd(local_68,local_68,uVar3);
          *(float *)(*(long *)(this + 0x58) + (ulong)uVar1 * 4) =
               (1.0 - fStack_6c / SQRT(fVar7)) * 255.0;
        } while (uVar4 < uVar6);
        uVar4 = *(uint *)(this + 0x54);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


