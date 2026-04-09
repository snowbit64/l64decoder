// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: walkStacklessQuantizedTreeCacheFriendly
// Entry Point: 00f5d1c4
// Size: 532 bytes
// Signature: undefined __thiscall walkStacklessQuantizedTreeCacheFriendly(btQuantizedBvh * this, btNodeOverlapCallback * param_1, ushort * param_2, ushort * param_3)


/* btQuantizedBvh::walkStacklessQuantizedTreeCacheFriendly(btNodeOverlapCallback*, unsigned short*,
   unsigned short*) const */

void __thiscall
btQuantizedBvh::walkStacklessQuantizedTreeCacheFriendly
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,ushort *param_2,ushort *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  ushort *puVar20;
  
  if (0 < *(int *)(this + 0xd4)) {
    lVar17 = 0;
    do {
      uVar4 = *param_2;
      puVar20 = (ushort *)(*(long *)(this + 0xe0) + lVar17 * 0x20);
      if (((((uVar4 <= puVar20[3]) && (uVar5 = *param_3, *puVar20 <= uVar5)) &&
           (uVar6 = param_2[2], uVar6 <= puVar20[5])) &&
          ((uVar7 = param_3[2], puVar20[2] <= uVar7 && (uVar8 = param_2[1], uVar8 <= puVar20[4]))))
         && (uVar9 = param_3[1], puVar20[1] <= uVar9)) {
        lVar1 = *(long *)(this + 0xe0) + lVar17 * 0x20;
        iVar2 = *(int *)(lVar1 + 0x10);
        if (iVar2 < 1) {
          iVar18 = 0;
        }
        else {
          iVar19 = *(int *)(lVar1 + 0xc);
          iVar18 = 1;
          iVar2 = iVar2 + iVar19;
          puVar20 = (ushort *)(*(long *)(this + 0xb8) + (long)iVar19 * 0x10);
          while( true ) {
            uVar10 = puVar20[3];
            uVar11 = *puVar20;
            uVar3 = *(uint *)(puVar20 + 6);
            uVar12 = puVar20[5];
            uVar13 = puVar20[2];
            uVar14 = puVar20[4];
            uVar15 = puVar20[1];
            if (((-1 < (int)uVar3) &&
                (((((uVar10 >= uVar4 && uVar5 >= uVar11) && uVar12 >= uVar6) && uVar7 >= uVar13) &&
                 uVar14 >= uVar8) && uVar9 >= uVar15)) &&
               (uVar16 = (**(code **)(*(long *)param_1 + 0x10))
                                   (param_1,uVar3 >> 0x15,uVar3 & 0x1fffff), (uVar16 & 1) == 0))
            break;
            if ((int)uVar3 < 0 &&
                (((((uVar10 < uVar4 || uVar5 < uVar11) || uVar12 < uVar6) || uVar7 < uVar13) ||
                 uVar14 < uVar8) || uVar9 < uVar15)) {
              iVar19 = iVar19 - *(int *)(puVar20 + 6);
              puVar20 = puVar20 + (long)-*(int *)(puVar20 + 6) * 8;
            }
            else {
              puVar20 = puVar20 + 8;
              iVar19 = iVar19 + 1;
            }
            if (iVar2 <= iVar19) break;
            uVar4 = *param_2;
            iVar18 = iVar18 + 1;
            uVar5 = *param_3;
            uVar6 = param_2[2];
            uVar7 = param_3[2];
            uVar8 = param_2[1];
            uVar9 = param_3[1];
          }
        }
        if (maxIterations < iVar18) {
          maxIterations = iVar18;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(this + 0xd4));
  }
  return;
}


