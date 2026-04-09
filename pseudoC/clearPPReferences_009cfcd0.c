// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearPPReferences
// Entry Point: 009cfcd0
// Size: 780 bytes
// Signature: undefined __thiscall clearPPReferences(ProceduralPlacementManager * this, PPMask * param_1)


/* ProceduralPlacementManager::clearPPReferences(ProceduralPlacementScriptBinding::PPMask*) */

void __thiscall
ProceduralPlacementManager::clearPPReferences(ProceduralPlacementManager *this,PPMask *param_1)

{
  char *__s;
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ProceduralPlacementCacheManager *this_00;
  long lVar6;
  size_t sVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  Node *this_01;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (this[0x108] != (ProceduralPlacementManager)0x0) {
    return;
  }
  lVar8 = *(long *)(this + 0xe0);
  if ((lVar8 != 0) &&
     (lVar6 = *(long *)(lVar8 + 0x28), (int)((ulong)(*(long *)(lVar8 + 0x30) - lVar6) >> 3) != 0)) {
    uVar12 = 0;
    plVar9 = *(long **)(this + 0xb0);
    do {
      lVar10 = *(long *)(lVar6 + uVar12 * 8);
      lVar6 = *(long *)(lVar10 + 0x28);
      if ((int)((ulong)(*(long *)(lVar10 + 0x30) - lVar6) >> 3) != 0) {
        uVar19 = 0;
        do {
          lVar8 = *(long *)(this + 0x38);
          bVar4 = *(long *)(this + 0x40) != lVar8;
          uVar17 = (uint)bVar4;
          if (bVar4) {
            this_01 = *(Node **)(lVar6 + (ulong)uVar19 * 8);
            uVar13 = 0;
            uVar11 = 0;
            uVar18 = 1;
            do {
              uVar17 = (uint)bVar4;
              lVar8 = *(long *)(lVar8 + uVar11 * 8);
              __s = "";
              if (*(char **)(this_01 + 0x100) != (char *)0x0) {
                __s = *(char **)(this_01 + 0x100);
              }
              sVar7 = strlen(__s);
              bVar2 = *(byte *)(lVar8 + 0x18);
              sVar1 = (ulong)(bVar2 >> 1);
              if ((bVar2 & 1) != 0) {
                sVar1 = *(size_t *)(lVar8 + 0x20);
              }
                    /* try { // try from 009cfec8 to 009cfed7 has its CatchHandler @ 009cffdc */
              if ((sVar7 == sVar1) &&
                 (iVar5 = std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::compare((ulong)(byte *)(lVar8 + 0x18),0,(char *)0xffffffffffffffff,
                                    (ulong)__s), iVar5 == 0)) {
                if (((byte)this_01[0x41] >> 3 & 1) != 0) {
                  TransformGroup::updateEulerFromMatrix();
                }
                fVar21 = *(float *)(this_01 + 0x130);
                fVar22 = *(float *)(this_01 + 0x138);
                lVar6 = ProceduralPlacementCacheManager::getInstance();
                fVar21 = fVar21 + (float)(ulong)(*(uint *)(lVar6 + 0x38) >> 1);
                lVar6 = ProceduralPlacementCacheManager::getInstance();
                uVar16 = (uint)fVar21;
                fVar22 = fVar22 + (float)(ulong)(*(uint *)(lVar6 + 0x3c) >> 1);
                uVar15 = (uint)fVar22;
                fVar20 = (float)(**(code **)(*plVar9 + 0x68))(plVar9,uVar16,uVar15);
                if ((uVar13 | (uint)(int)fVar20 >> 2 & 1) == 0) {
                  uVar11 = (**(code **)(**(long **)param_1 + 0x58))();
                  if ((((uVar11 & 1) == 0) &&
                      (fVar20 = (float)(**(code **)(**(long **)param_1 + 0x68))
                                                 (*(long **)param_1,uVar16,uVar15), 0.0 < fVar20))
                     || ((uVar11 = (**(code **)(**(long **)param_1 + 0x58))(), (uVar11 & 1) != 0 &&
                         (uVar11 = (**(code **)(**(long **)param_1 + 0x70))
                                             (*(long **)param_1,uVar16,uVar15), (uVar11 & 1) != 0)))
                     ) {
                    if (*(int *)(this + 0x130) < *(int *)(this + 0x134)) {
                      if (*(int *)(this + 0x138) < *(int *)(this + 0x13c)) {
                        iVar5 = (int)fVar21;
                        uVar14 = 0;
                        uVar13 = 0;
                        if ((((iVar5 < *(int *)(this + 0x130)) ||
                             (uVar13 = uVar14, *(int *)(this + 0x134) < iVar5)) ||
                            (iVar5 = (int)fVar22, iVar5 < *(int *)(this + 0x138))) ||
                           (*(int *)(this + 0x13c) < iVar5)) goto LAB_009cfe6c;
                      }
                    }
                    this_00 = (ProceduralPlacementCacheManager *)
                              ProceduralPlacementCacheManager::getInstance();
                    ProceduralPlacementCacheManager::addTypeForRemoval
                              (this_00,(basic_string *)(lVar8 + 0x30),uVar16,uVar15);
                    Node::unlink(this_01,false);
                    break;
                  }
                  uVar13 = 0;
                }
                else {
                  uVar13 = 1;
                }
              }
LAB_009cfe6c:
              lVar8 = *(long *)(this + 0x38);
              uVar11 = *(long *)(this + 0x40) - lVar8 >> 3;
              bVar4 = uVar18 < uVar11;
              uVar17 = (uint)bVar4;
              bVar3 = uVar18 < uVar11;
              uVar11 = uVar18;
              uVar18 = (ulong)((int)uVar18 + 1);
            } while (bVar3);
          }
          lVar6 = *(long *)(lVar10 + 0x28);
          uVar19 = uVar19 + (~uVar17 & 1);
        } while (uVar19 < (uint)((ulong)(*(long *)(lVar10 + 0x30) - lVar6) >> 3));
        lVar8 = *(long *)(this + 0xe0);
      }
      lVar6 = *(long *)(lVar8 + 0x28);
      uVar12 = uVar12 + 1;
    } while (uVar12 < ((ulong)(*(long *)(lVar8 + 0x30) - lVar6) >> 3 & 0xffffffff));
  }
  ProceduralPlacementCacheManager::getInstance();
  ProceduralPlacementCacheManager::removeTypes();
  return;
}


