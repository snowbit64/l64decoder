// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearTextureInMask
// Entry Point: 009ce818
// Size: 1052 bytes
// Signature: undefined __thiscall clearTextureInMask(ProceduralPlacementManager * this, PPMask * param_1, basic_string * param_2)


/* ProceduralPlacementManager::clearTextureInMask(ProceduralPlacementScriptBinding::PPMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
ProceduralPlacementManager::clearTextureInMask
          (ProceduralPlacementManager *this,PPMask *param_1,basic_string *param_2)

{
  BaseTerrain *this_00;
  uint uVar1;
  char *__s2;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  Node *pNVar6;
  ulong uVar7;
  uchar *puVar8;
  char *__s1;
  ulong uVar9;
  ProceduralPlacementCacheManager *this_01;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  TerrainLodTexture *this_02;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  if (this[0x108] == (ProceduralPlacementManager)0x0) {
    plVar11 = *(long **)(this + 0xb0);
    uVar3 = (**(code **)(**(long **)param_1 + 0x40))();
    uVar4 = (**(code **)(*plVar11 + 0x40))(plVar11);
    if (uVar3 < uVar4) {
      uVar3 = (**(code **)(*plVar11 + 0x40))(plVar11);
    }
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    local_a0 = 0;
                    /* try { // try from 009ce8b0 to 009ce8c7 has its CatchHandler @ 009cec44 */
    EngineManager::getInstance();
    pNVar6 = (Node *)Renderer::getRootNode();
    NodeUtil::findByType(pNVar6,0x80,(vector *)&local_b0);
    lVar12 = *local_b0;
    this_00 = (BaseTerrain *)(lVar12 + 0x170);
    this_02 = *(TerrainLodTexture **)(lVar12 + 0x248);
                    /* try { // try from 009ce8d8 to 009ce8e3 has its CatchHandler @ 009cec3c */
    uVar4 = BaseTerrain::getLodTextureSize();
                    /* try { // try from 009ce8e4 to 009ce91b has its CatchHandler @ 009cec40 */
    uVar7 = TerrainLodTexture::getLayersRegionMemorySize(this_02,uVar4,uVar4);
    puVar8 = (uchar *)operator_new__(uVar7 & 0xffffffff);
    TerrainLodTexture::getLayersRegion(this_02,0,0,uVar4,uVar4,puVar8);
    if ((int)((ulong)(*(long *)(lVar12 + 0x180) - *(long *)(lVar12 + 0x178)) >> 4) * -0x45d1745d !=
        0) {
      uVar15 = 0;
      do {
                    /* try { // try from 009ce948 to 009ce953 has its CatchHandler @ 009cec4c */
        __s1 = (char *)BaseTerrain::getDetailLayerName(this_00,uVar15);
        __s2 = (char *)((long)param_2 + 1);
        if ((*(byte *)param_2 & 1) != 0) {
          __s2 = *(char **)(param_2 + 4);
        }
        iVar5 = strcmp(__s1,__s2);
        if (iVar5 == 0) goto LAB_009ce98c;
        uVar15 = uVar15 + 1;
      } while (uVar15 < (uint)((int)((ulong)(*(long *)(lVar12 + 0x180) - *(long *)(lVar12 + 0x178))
                                    >> 4) * -0x45d1745d));
    }
    uVar15 = 0;
LAB_009ce98c:
    uVar1 = uVar4;
    if (uVar4 <= uVar3) {
      uVar1 = uVar3;
    }
                    /* try { // try from 009ce9a4 to 009ce9ab has its CatchHandler @ 009cec38 */
    uVar7 = (**(code **)(*plVar11 + 0x40))(plVar11);
                    /* try { // try from 009ce9bc to 009ce9bf has its CatchHandler @ 009cec34 */
    uVar9 = (**(code **)(**(long **)param_1 + 0x40))();
    if (uVar1 != 0) {
      fVar18 = (float)(ulong)uVar1;
      fVar20 = (float)(uVar7 & 0xffffffff) / fVar18;
      uVar3 = 0;
      fVar21 = (float)(uVar9 & 0xffffffff) / fVar18;
      fVar18 = (float)(ulong)uVar4 / fVar18;
      do {
        fVar16 = (float)(ulong)uVar3;
        uVar14 = 0;
        fVar19 = fVar18 * fVar16;
        uVar10 = (uint)fVar19;
        do {
                    /* try { // try from 009cea50 to 009ceab3 has its CatchHandler @ 009cec58 */
          uVar7 = (**(code **)(**(long **)param_1 + 0x58))();
          if ((uVar7 & 1) == 0) {
            fVar22 = (float)(ulong)uVar14;
            fVar17 = (float)(**(code **)(**(long **)param_1 + 0x68))
                                      (*(long **)param_1,(int)(fVar21 * fVar22),
                                       (int)(fVar21 * fVar16));
            if (fVar17 <= 0.0) goto LAB_009cea80;
LAB_009ceab8:
                    /* try { // try from 009ceac8 to 009cead3 has its CatchHandler @ 009cec54 */
            fVar17 = (float)(**(code **)(*plVar11 + 0x68))
                                      (plVar11,(int)(fVar20 * fVar22),(int)(fVar20 * fVar16));
            if (((int)fVar17 & 1U) == 0) {
              fVar22 = fVar18 * fVar22;
              if (*(int *)(this + 0x130) < *(int *)(this + 0x134)) {
                if ((*(int *)(this + 0x138) < *(int *)(this + 0x13c)) &&
                   (((((int)fVar22 < *(int *)(this + 0x130) ||
                      (*(int *)(this + 0x134) < (int)fVar22)) ||
                     ((int)uVar10 < *(int *)(this + 0x138))) ||
                    (*(int *)(this + 0x13c) < (int)uVar10)))) goto LAB_009cea38;
              }
              fVar17 = (float)NEON_fmadd((int)fVar19,(float)(ulong)uVar4,(int)fVar22);
              lVar12 = *(long *)(this + 0x10) - *(long *)(this + 8);
              if (lVar12 != 0) {
                uVar7 = 0;
                do {
                  lVar13 = *(long *)(*(long *)(this + 8) + uVar7 * 8);
                  if (puVar8[(uint)(int)fVar17] == *(uchar *)(lVar13 + 0x30)) {
                    /* try { // try from 009ceb78 to 009ceb8b has its CatchHandler @ 009cec50 */
                    this_01 = (ProceduralPlacementCacheManager *)
                              ProceduralPlacementCacheManager::getInstance();
                    ProceduralPlacementCacheManager::addTypeForRemoval
                              (this_01,(basic_string *)(lVar13 + 0x18),(int)fVar22,uVar10);
                    break;
                  }
                  uVar7 = (ulong)((int)uVar7 + 1);
                } while (uVar7 < (ulong)(lVar12 >> 3));
              }
              puVar8[(uint)(int)fVar17] = (uchar)uVar15;
            }
          }
          else {
LAB_009cea80:
            uVar7 = (**(code **)(**(long **)param_1 + 0x58))();
            if ((uVar7 & 1) != 0) {
              fVar22 = (float)(ulong)uVar14;
              uVar7 = (**(code **)(**(long **)param_1 + 0x70))
                                (*(long **)param_1,(int)(fVar21 * fVar22),(int)(fVar21 * fVar16));
              if ((uVar7 & 1) != 0) goto LAB_009ceab8;
            }
          }
LAB_009cea38:
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar1);
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar1);
    }
                    /* try { // try from 009ceb90 to 009cebdf has its CatchHandler @ 009cec48 */
    BaseTerrain::setLayersRegion(this_00,0,0,uVar4,uVar4,puVar8);
    BaseTerrain::markLayersRegionDirty(this_00,0,0,uVar4,uVar4);
    operator_delete__(puVar8);
    ProceduralPlacementCacheManager::getInstance();
    ProceduralPlacementCacheManager::removeTypes();
    if (local_b0 != (long *)0x0) {
      local_a8 = local_b0;
      operator_delete(local_b0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


