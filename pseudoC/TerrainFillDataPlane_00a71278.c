// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainFillDataPlane
// Entry Point: 00a71278
// Size: 484 bytes
// Signature: undefined __thiscall TerrainFillDataPlane(TerrainFillDataPlane * this, char * param_1, TerrainLayerTransformGroupDesc * param_2, TerrainTransformGroup * param_3)


/* TerrainFillDataPlane::TerrainFillDataPlane(char const*, TerrainLayerTransformGroupDesc const&,
   TerrainTransformGroup*) */

void __thiscall
TerrainFillDataPlane::TerrainFillDataPlane
          (TerrainFillDataPlane *this,char *param_1,TerrainLayerTransformGroupDesc *param_2,
          TerrainTransformGroup *param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  ulong local_80;
  undefined4 local_78;
  __tree_node **local_70;
  __tree_node *local_68;
  ulong local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  TerrainDataPlane::TerrainDataPlane
            ((TerrainDataPlane *)this,1,param_1,(TerrainDetailTransformGroupDesc *)param_2,param_3);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined ***)this = &PTR__TerrainFillDataPlane_00fe3f88;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x1000000000000;
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_2 + 0x284);
  iVar3 = *(int *)(param_2 + 0x288);
  *(int *)(this + 0x8c) = iVar3;
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_2 + 0x28c);
  if (iVar3 != 0) {
                    /* try { // try from 00a71304 to 00a7131f has its CatchHandler @ 00a7145c */
    uVar6 = DensityMap::getSquareSize();
    uVar4 = 0;
    if (*(uint *)(this + 0x6c) != 0) {
      uVar4 = uVar6 / *(uint *)(this + 0x6c);
    }
    *(uint *)(this + 0x68) = uVar4;
    DensityMap::setPolygonRoundingMode(*(DensityMap **)(this + 0x50),3);
  }
  lVar7 = *(long *)(param_2 + 0x2a8);
  if (*(long *)(param_2 + 0x2b0) != lVar7) {
    uVar9 = 0;
    do {
      pbVar1 = (byte *)(lVar7 + uVar9 * 0x40);
      pbVar8 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        pbVar8 = pbVar1 + 1;
      }
                    /* try { // try from 00a71380 to 00a71387 has its CatchHandler @ 00a71470 */
      BaseTerrain::LayerGroup::LayerGroup
                ((LayerGroup *)&local_98,(char *)pbVar8,*(uint *)(pbVar1 + 0x18),
                 *(uint *)(pbVar1 + 0x1c),*(uint *)(pbVar1 + 0x20),(map *)(pbVar1 + 0x28));
      puVar2 = *(ulong **)(this + 0xa0);
      if (puVar2 < *(ulong **)(this + 0xa8)) {
        puVar2[2] = (ulong)local_88;
        puVar2[1] = uStack_90;
        *puVar2 = local_98;
        uStack_90 = 0;
        local_88 = (void *)0x0;
        local_98 = 0;
        puVar2[3] = local_80;
        *(undefined4 *)(puVar2 + 4) = local_78;
        puVar2[5] = (ulong)local_70;
        puVar2[6] = (ulong)local_68;
        puVar2[7] = local_60;
        if (local_60 == 0) {
          puVar2[5] = (ulong)(puVar2 + 6);
        }
        else {
          *(ulong **)(local_68 + 0x10) = puVar2 + 6;
          local_68 = (__tree_node *)0x0;
          local_60 = 0;
          local_70 = &local_68;
        }
        *(ulong **)(this + 0xa0) = puVar2 + 8;
      }
      else {
                    /* try { // try from 00a713ec to 00a713f7 has its CatchHandler @ 00a71460 */
        std::__ndk1::vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>>
        ::__push_back_slow_path<BaseTerrain::LayerGroup>
                  ((vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>>
                    *)(this + 0x98),(LayerGroup *)&local_98);
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 *)&local_70,local_68);
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      uVar9 = (ulong)((int)uVar9 + 1);
      lVar7 = *(long *)(param_2 + 0x2a8);
    } while (uVar9 < (ulong)(*(long *)(param_2 + 0x2b0) - lVar7 >> 6));
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


