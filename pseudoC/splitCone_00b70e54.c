// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitCone
// Entry Point: 00b70e54
// Size: 1268 bytes
// Signature: undefined __thiscall splitCone(Brep * this, uint param_1, uint param_2, ushort param_3)


/* Brep::splitCone(unsigned int, unsigned int, unsigned short) */

ulong __thiscall Brep::splitCone(Brep *this,uint param_1,uint param_2,ushort param_3)

{
  undefined2 *puVar1;
  ushort *puVar2;
  long *plVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  ushort uVar12;
  undefined2 uVar13;
  long lVar14;
  bool bVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ushort local_78;
  undefined2 local_76;
  undefined4 local_74;
  ushort local_70;
  long local_68;
  
  lVar14 = tpidr_el0;
  uVar25 = (ulong)param_1;
  local_68 = *(long *)(lVar14 + 0x28);
  if (param_1 == param_2) {
    uVar7 = param_1 + 2;
    if ((param_1 - 1 & 3) != 0) {
      uVar7 = param_1 - 1;
    }
    uVar25 = splitEdge(this,param_1,
                       (Vector3 *)
                       (*(long *)(this + 0x2ef0) +
                       (ulong)*(ushort *)
                               (*(long *)(this + 0x2f50) +
                               (ulong)*(ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar7 * 8) * 0xc
                               ) * 0x10),0.0,param_3);
    if (*(long *)(lVar14 + 0x28) == local_68) {
      return uVar25;
    }
  }
  else {
    lVar16 = *(long *)(this + 0x2f68);
    uVar7 = *(uint *)(lVar16 + (ulong)param_2 * 8 + 4);
    uVar28 = (ulong)uVar7;
    uVar29 = *(long *)(this + 0x2f70) - lVar16;
    uVar17 = 1;
    if (uVar7 != 0xffffffff) {
      uVar17 = 2;
    }
    uVar18 = (long)uVar29 >> 5;
    uVar26 = uVar18 + uVar17;
    if (uVar18 < uVar26) {
      std::__ndk1::vector<Brep::Face,std::__ndk1::allocator<Brep::Face>>::__append
                ((vector<Brep::Face,std::__ndk1::allocator<Brep::Face>> *)(this + 0x2f68),uVar17);
      lVar16 = *(long *)(this + 0x2f68);
    }
    else if (uVar26 < uVar18) {
      *(ulong *)(this + 0x2f70) = lVar16 + uVar26 * 0x20;
    }
    memset((void *)(lVar16 + (uVar29 >> 5 & 0xffffffff) * 0x20),0,uVar17 << 5);
    uVar5 = param_1 + 2;
    if ((param_1 - 1 & 3) != 0) {
      uVar5 = param_1 - 1;
    }
    lVar27 = (ulong)uVar5 * 8;
    uVar12 = *(ushort *)(*(long *)(this + 0x2f68) + lVar27);
    uVar18 = (ulong)uVar12;
    uVar26 = (*(long *)(this + 0x2f58) - *(long *)(this + 0x2f50) >> 2) * -0x5555555555555555;
    plVar3 = (long *)(this + 0x2f50);
    local_78 = addVertex(this,(Vector3 *)
                              (*(long *)(this + 0x2ef0) +
                              (ulong)*(ushort *)(*(long *)(this + 0x2f50) + uVar18 * 0xc) * 0x10));
    uVar17 = (ulong)local_78;
    local_76 = *(undefined2 *)(*(long *)(this + 0x2ef0) + uVar17 * 0x10 + 0xc);
    local_74 = 0xffffffff;
    local_70 = param_3;
    FUN_00b704a0(plVar3,&local_78);
    uVar13 = (undefined2)uVar26;
    *(undefined2 *)(*(long *)(this + 0x2ef0) + uVar17 * 0x10 + 0xc) = uVar13;
    lVar16 = *(long *)(this + 0x2f68);
    iVar23 = (int)(uVar29 >> 5);
    uVar5 = iVar23 << 2 | 1;
    uVar9 = *(ushort *)(lVar16 + lVar27 + 2);
    *(undefined8 *)(lVar16 + (ulong)uVar5 * 8) = *(undefined8 *)(lVar16 + uVar25 * 8);
    lVar16 = *(long *)(this + 0x2f68);
    uVar24 = iVar23 << 2 | 2;
    uVar17 = (ulong)*(ushort *)(lVar16 + (ulong)uVar5 * 8 + 2);
    uVar6 = iVar23 << 2 | 3;
    if (uVar17 != 0xffff) {
      lVar20 = *(long *)(this + 0x2f98) + uVar17 * 0x18;
      *(short *)(lVar20 + 0x14) = *(short *)(lVar20 + 0x14) + 1;
    }
    puVar1 = (undefined2 *)(lVar16 + (ulong)uVar24 * 8);
    *puVar1 = uVar13;
    *(uint *)(puVar1 + 2) = param_1;
    puVar1[1] = uVar9;
    if (uVar9 == 0xffff) {
      puVar2 = (ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar6 * 8);
      *puVar2 = uVar12;
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      puVar2[1] = 0xffff;
    }
    else {
      lVar16 = *(long *)(this + 0x2f98) + (ulong)uVar9 * 0x18;
      *(short *)(lVar16 + 0x14) = *(short *)(lVar16 + 0x14) + 1;
      puVar2 = (ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar6 * 8);
      *puVar2 = uVar12;
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      puVar2[1] = uVar9;
      lVar16 = *(long *)(this + 0x2f98) + (ulong)uVar9 * 0x18;
      *(short *)(lVar16 + 0x14) = *(short *)(lVar16 + 0x14) + 1;
    }
    lVar16 = *plVar3;
    *(uint *)(lVar16 + (uVar26 & 0xffff) * 0xc + 4) = uVar6;
    puVar19 = (uint *)(lVar16 + uVar18 * 0xc + 4);
    uVar22 = *puVar19;
    if (*puVar19 == param_1) {
      *puVar19 = uVar5;
      uVar22 = uVar5;
    }
    lVar16 = *(long *)(this + 0x2f68);
    *(undefined2 *)(lVar16 + lVar27) = uVar13;
    puVar21 = (uint *)(lVar16 + uVar25 * 8 + 4);
    uVar8 = *puVar21;
    if (uVar8 != 0xffffffff) {
      *(uint *)(lVar16 + (ulong)uVar8 * 8 + 4) = uVar5;
    }
    *puVar21 = uVar24;
    if (param_1 == 0xffffffff) {
      bVar15 = true;
      uVar24 = 0xffffffff;
    }
    else {
      do {
        uVar24 = (uint)uVar25;
        if (uVar22 == uVar24) {
          *puVar19 = uVar5;
          uVar22 = uVar5;
        }
        uVar8 = uVar24 + 2;
        if ((uVar24 - 1 & 3) != 0) {
          uVar8 = uVar24 - 1;
        }
        puVar1 = (undefined2 *)(lVar16 + (ulong)uVar8 * 8);
        uVar24 = *(uint *)(puVar1 + 2);
        uVar25 = (ulong)uVar24;
        *puVar1 = uVar13;
        bVar15 = uVar24 != param_2;
      } while (bVar15 && uVar24 != 0xffffffff);
    }
    if (uVar7 != 0xffffffff) {
      iVar23 = iVar23 * 4;
      puVar2 = (ushort *)(lVar16 + (ulong)(iVar23 + 5U) * 8);
      uVar9 = *(ushort *)(lVar16 + uVar28 * 8 + 2);
      uVar22 = uVar7 + 2;
      if ((uVar7 - 1 & 3) != 0) {
        uVar22 = uVar7 - 1;
      }
      uVar8 = iVar23 + 6;
      *(uint *)(puVar2 + 2) = param_2;
      *puVar2 = uVar12;
      puVar2[1] = uVar9;
      if ((ulong)uVar9 == 0xffff) {
        puVar1 = (undefined2 *)(*(long *)(this + 0x2f68) + (ulong)uVar8 * 8);
        *puVar1 = uVar13;
        *(uint *)(puVar1 + 2) = uVar6;
        puVar1[1] = 0xffff;
      }
      else {
        lVar27 = (ulong)uVar9 * 0x18;
        lVar16 = *(long *)(this + 0x2f98) + lVar27;
        *(short *)(lVar16 + 0x14) = *(short *)(lVar16 + 0x14) + 1;
        puVar1 = (undefined2 *)(*(long *)(this + 0x2f68) + (ulong)uVar8 * 8);
        *puVar1 = uVar13;
        *(uint *)(puVar1 + 2) = uVar6;
        puVar1[1] = uVar9;
        lVar27 = *(long *)(this + 0x2f98) + lVar27;
        *(short *)(lVar27 + 0x14) = *(short *)(lVar27 + 0x14) + 1;
      }
      lVar27 = (ulong)(iVar23 + 7U) * 8;
      puVar1 = (undefined2 *)(*(long *)(this + 0x2f68) + (ulong)uVar22 * 8);
      puVar4 = (undefined2 *)(*(long *)(this + 0x2f68) + lVar27);
      uVar10 = *puVar1;
      *(uint *)(puVar4 + 2) = uVar7;
      uVar11 = puVar1[1];
      *puVar4 = uVar10;
      puVar4[1] = uVar11;
      lVar16 = *(long *)(this + 0x2f68);
      uVar25 = (ulong)*(ushort *)(lVar16 + lVar27 + 2);
      if (uVar25 != 0xffff) {
        lVar27 = *(long *)(this + 0x2f98) + uVar25 * 0x18;
        *(short *)(lVar27 + 0x14) = *(short *)(lVar27 + 0x14) + 1;
      }
      puVar1 = (undefined2 *)(lVar16 + uVar28 * 8);
      *(uint *)(lVar16 + (ulong)param_2 * 8 + 4) = iVar23 + 5U;
      *puVar1 = uVar13;
      *(uint *)(puVar1 + 2) = iVar23 + 7U;
      if (bVar15) {
        puVar19 = (uint *)(*plVar3 + uVar18 * 0xc + 4);
        do {
          iVar23 = (int)uVar28;
          uVar7 = iVar23 - 2;
          if ((iVar23 + 1U & 3) != 0) {
            uVar7 = iVar23 + 1;
          }
          if (uVar7 == uVar24) break;
          *(undefined2 *)(lVar16 + uVar28 * 8) = uVar13;
          if (*puVar19 == uVar7) {
            *puVar19 = uVar5;
          }
          uVar7 = *(uint *)(lVar16 + (ulong)uVar7 * 8 + 4);
          uVar28 = (ulong)uVar7;
        } while (uVar7 != 0xffffffff);
      }
      *(uint *)(lVar16 + (ulong)uVar6 * 8 + 4) = uVar8;
    }
    if (*(long *)(lVar14 + 0x28) == local_68) {
      return uVar26 & 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


