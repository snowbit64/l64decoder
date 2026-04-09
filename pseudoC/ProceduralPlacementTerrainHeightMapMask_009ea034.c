// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementTerrainHeightMapMask
// Entry Point: 009ea034
// Size: 412 bytes
// Signature: undefined __thiscall ProceduralPlacementTerrainHeightMapMask(ProceduralPlacementTerrainHeightMapMask * this, BaseTerrain * param_1)


/* ProceduralPlacementTerrainHeightMapMask::ProceduralPlacementTerrainHeightMapMask(BaseTerrain*) */

void __thiscall
ProceduralPlacementTerrainHeightMapMask::ProceduralPlacementTerrainHeightMapMask
          (ProceduralPlacementTerrainHeightMapMask *this,BaseTerrain *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  void *__s;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort local_90;
  void *local_80;
  ushort local_78;
  void *local_68;
  ushort local_60;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60 = 0;
  local_78 = 0;
  local_90 = 0;
                    /* try { // try from 009ea06c to 009ea07b has its CatchHandler @ 009ea1d0 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_60,(basic_string *)&local_78,
             (basic_string *)&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  *(BaseTerrain **)(this + 200) = param_1;
  this[0xd0] = (ProceduralPlacementTerrainHeightMapMask)0x0;
  *(undefined ***)this = &PTR__ProceduralPlacementTerrainHeightMapMask_00fe2d68;
                    /* try { // try from 009ea0b4 to 009ea10b has its CatchHandler @ 009ea220 */
  uVar3 = BaseTerrain::getHeightMapSize();
  *(undefined4 *)(this + 0x50) = uVar3;
  iVar4 = BaseTerrain::getHeightMapSize();
  *(int *)(this + 0x54) = iVar4;
  __s = operator_new__((ulong)(uint)(*(int *)(this + 0x50) * iVar4) << 2);
  *(void **)(this + 0x58) = __s;
  uVar5 = (**(code **)(*(long *)this + 0x40))(this);
  uVar6 = (**(code **)(*(long *)this + 0x48))(this);
  memset(__s,0,(uVar5 & 0xffffffff) * (uVar6 & 0xffffffff) * 4);
  uVar8 = *(uint *)(this + 0x54);
  if (uVar8 != 0) {
    uVar9 = 0;
    uVar7 = *(uint *)(this + 0x50);
    do {
      if (uVar7 != 0) {
        uVar8 = 0;
        do {
                    /* try { // try from 009ea158 to 009ea15f has its CatchHandler @ 009ea224 */
          uVar3 = BaseTerrain::getInterpolatedHeightAtPoint
                            (*(BaseTerrain **)(this + 200),(float)(ulong)uVar8,(float)(ulong)uVar9);
          uVar7 = *(uint *)(this + 0x50);
          uVar1 = uVar8 + uVar9 * uVar7;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(*(long *)(this + 0x58) + (ulong)uVar1 * 4) = uVar3;
        } while (uVar8 < uVar7);
        uVar8 = *(uint *)(this + 0x54);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


