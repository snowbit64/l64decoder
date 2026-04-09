// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveNearCollisions
// Entry Point: 009b4584
// Size: 460 bytes
// Signature: undefined __thiscall resolveNearCollisions(Bt2PhysicsOverlapCallback * this, btOverlappingPairCache * param_1)


/* Bt2PhysicsOverlapCallback::resolveNearCollisions(btOverlappingPairCache*) */

void __thiscall
Bt2PhysicsOverlapCallback::resolveNearCollisions
          (Bt2PhysicsOverlapCallback *this,btOverlappingPairCache *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  long **pplVar20;
  
  uVar3 = *(uint *)(this + 0xc);
  if (uVar3 != 0) {
    uVar18 = 0;
    do {
      uVar11 = -(uVar18 >> 0x1f) & 0xffffffe000000000 | uVar18 << 5;
      lVar13 = *(long *)param_1;
      lVar7 = *(long *)(this + 0x18) + uVar11;
      uVar9 = *(undefined8 *)(*(long *)(this + 0x18) + uVar11);
      pplVar20 = (long **)(lVar7 + 8);
      puVar19 = (ulong *)(lVar7 + 0x10);
      *puVar19 = 0;
      lVar7 = (**(code **)(lVar13 + 0x68))(param_1,uVar9,*pplVar20);
      if ((lVar7 != 0) && (plVar8 = *(long **)(lVar7 + 0x10), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x20))(plVar8,this + 0x40);
        iVar4 = *(int *)(this + 0x44);
        if (0 < iVar4) {
          lVar13 = **pplVar20;
          lVar7 = *(long *)(this + 0x50);
          if (**(char **)(lVar13 + 0x108) < '\0') {
            iVar12 = 0;
            do {
              lVar14 = *(long *)(lVar7 + (long)iVar12 * 8);
              uVar1 = *(uint *)(lVar14 + 0x318);
              if (uVar1 != 0) {
                uVar11 = *puVar19;
                if (uVar1 != 1) {
                  uVar6 = 0;
                  uVar17 = 0;
                  uVar15 = uVar1 & 0xfffffffe;
                  do {
                    lVar10 = lVar14 + 8 + (long)(int)uVar6 * 0xc0;
                    lVar16 = lVar14 + 8 + (long)(int)(uVar6 + 1) * 0xc0;
                    uVar6 = uVar6 + 2;
                    puVar2 = (uint *)(lVar16 + 0x68);
                    puVar5 = (uint *)(lVar10 + 0x68);
                    if (*(long *)(lVar14 + 0x308) != lVar13) {
                      puVar2 = (uint *)(lVar16 + 0x6c);
                      puVar5 = (uint *)(lVar10 + 0x6c);
                    }
                    uVar11 = 1L << ((ulong)*puVar5 & 0x3f) | uVar11;
                    uVar17 = 1L << ((ulong)*puVar2 & 0x3f) | uVar17;
                    if (uVar15 == uVar6) goto LAB_009b4724;
                  } while( true );
                }
                uVar15 = 0;
                do {
                  lVar16 = lVar14 + (long)(int)uVar15 * 0xc0;
                  uVar15 = uVar15 + 1;
                  puVar2 = (uint *)(lVar16 + 0x70);
                  if (*(long *)(lVar14 + 0x308) != lVar13) {
                    puVar2 = (uint *)(lVar16 + 0x74);
                  }
                  uVar17 = 1L << ((ulong)*puVar2 & 0x3f);
LAB_009b4724:
                  uVar11 = uVar17 | uVar11;
                } while (uVar1 != uVar15);
                *puVar19 = uVar11;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 != iVar4);
          }
          else {
            iVar12 = 0;
            do {
              if (0 < *(int *)(*(long *)(lVar7 + (long)iVar12 * 8) + 0x318)) {
                *puVar19 = 1;
                break;
              }
              iVar12 = iVar12 + 1;
            } while (iVar4 != iVar12);
          }
          *(undefined4 *)(this + 0x44) = 0;
        }
      }
      uVar1 = (int)uVar18 + 1;
      uVar18 = (ulong)uVar1;
    } while (uVar1 != uVar3);
  }
  return;
}


