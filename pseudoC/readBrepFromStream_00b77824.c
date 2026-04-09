// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readBrepFromStream
// Entry Point: 00b77824
// Size: 1312 bytes
// Signature: undefined __cdecl readBrepFromStream(GsBitStream * param_1, bool * param_2)


/* BrepUtil::readBrepFromStream(GsBitStream*, bool&) */

Brep * BrepUtil::readBrepFromStream(GsBitStream *param_1,bool *param_2)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  Vector3 *pVVar5;
  ulong uVar6;
  Vector3 *pVVar7;
  Vector3 *pVVar8;
  Brep *this;
  ushort uVar9;
  long lVar10;
  uint uVar11;
  ushort local_84 [2];
  ushort local_80 [2];
  undefined2 local_7c [2];
  undefined4 local_78;
  uint local_74;
  ushort local_70 [2];
  ushort local_6c [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_2 = false;
  uVar4 = GsBitStream::readBits(param_1,(uchar *)local_6c,0x10,true);
  if ((((uVar4 & 1) != 0) &&
      (uVar4 = GsBitStream::readBits(param_1,(uchar *)local_70,0x10,true), (uVar4 & 1) != 0)) &&
     (uVar4 = GsBitStream::readBits(param_1,(uchar *)&local_74,0x20,true), (uVar4 & 1) != 0)) {
    uVar4 = (ulong)local_6c[0];
    pVVar5 = (Vector3 *)operator_new__(uVar4 * 0xc);
    if (uVar4 != 0) {
      uVar4 = 0;
      pVVar7 = pVVar5;
      do {
        uVar6 = GsBitStream::readBits(param_1,(uchar *)pVVar7,0x20,true);
        pVVar8 = pVVar5;
        if ((((uVar6 & 1) == 0) ||
            (uVar6 = GsBitStream::readBits(param_1,(uchar *)(pVVar7 + 4),0x20,true),
            (uVar6 & 1) == 0)) ||
           (uVar6 = GsBitStream::readBits(param_1,(uchar *)(pVVar7 + 8),0x20,true), (uVar6 & 1) == 0
           )) goto LAB_00b77c68;
        uVar4 = uVar4 + 1;
        pVVar7 = pVVar7 + 0xc;
      } while (uVar4 < local_6c[0]);
    }
    if ((ulong)local_70[0] == 0) {
      pVVar7 = (Vector3 *)0x0;
      uVar9 = 0;
    }
    else {
      uVar4 = (ulong)local_70[0] * 0x14;
      pVVar7 = (Vector3 *)operator_new__(uVar4);
      uVar4 = uVar4 - 0x14;
      memset(pVVar7,0,(uVar4 - (uint)((int)uVar4 + (int)((uVar4 & 0xfffffffc) / 0x14) * -0x14)) +
                      0x14);
      uVar4 = 0;
      pVVar8 = pVVar7;
      do {
        uVar6 = GsBitStream::readBits(param_1,(uchar *)(pVVar8 + 0xc),0x20,true);
        if ((((uVar6 & 1) == 0) ||
            (uVar6 = GsBitStream::readBits(param_1,(uchar *)(pVVar8 + 0x10),0x20,true),
            (uVar6 & 1) == 0)) ||
           ((uVar6 = GsBitStream::readBits(param_1,(uchar *)pVVar8,0x20,true), (uVar6 & 1) == 0 ||
            ((uVar6 = GsBitStream::readBits(param_1,(uchar *)(pVVar8 + 4),0x20,true),
             (uVar6 & 1) == 0 ||
             (uVar6 = GsBitStream::readBits(param_1,(uchar *)(pVVar8 + 8),0x20,true),
             (uVar6 & 1) == 0)))))) {
          operator_delete__(pVVar5);
          pVVar8 = pVVar7;
          goto LAB_00b77c68;
        }
        uVar4 = uVar4 + 1;
        pVVar8 = pVVar8 + 0x14;
        uVar9 = local_70[0];
      } while (uVar4 < local_70[0]);
    }
    uVar11 = local_74;
    pVVar8 = (Vector3 *)operator_new__((ulong)local_74 * 0x14);
    if (uVar11 == 0) {
      uVar1 = local_6c[0];
      uVar11 = 0;
LAB_00b77cac:
      this = (Brep *)operator_new(0x2fb8);
                    /* try { // try from 00b77cb8 to 00b77ce7 has its CatchHandler @ 00b77d44 */
      Brep::Brep(this,uVar1,pVVar5,uVar9,(BrepWedge *)pVVar7,uVar11,(BrepTriangle *)pVVar8,true,true
                 ,(Matrix4x4 *)0x0,(Matrix4x4 *)0x0,(uchar *)0x0);
      operator_delete__(pVVar5);
      if (pVVar7 != (Vector3 *)0x0) {
        operator_delete__(pVVar7);
      }
      operator_delete__(pVVar8);
      goto LAB_00b77c70;
    }
    uVar4 = GsBitStream::readBits(param_1,(uchar *)&local_78,0x20,true);
    if ((uVar4 & 1) != 0) {
      lVar10 = 0;
      bVar3 = true;
      while (uVar4 = GsBitStream::readBits(param_1,(uchar *)local_7c,0x10,true), (uVar4 & 1) != 0) {
        *(undefined4 *)((BrepTriangle *)pVVar8 + lVar10 * 0x14 + 0x10) = local_78;
        *(undefined2 *)((BrepTriangle *)pVVar8 + lVar10 * 0x14 + 0xc) = local_7c[0];
        uVar4 = GsBitStream::readBits(param_1,(uchar *)local_80,0x10,true);
        if (((uVar4 & 1) == 0) ||
           (uVar4 = GsBitStream::readBits(param_1,(uchar *)local_84,0x10,true), (uVar4 & 1) == 0))
        break;
        *(ushort *)((BrepTriangle *)pVVar8 + lVar10 * 0x14) = local_80[0];
        *(ushort *)((long)((BrepTriangle *)pVVar8 + lVar10 * 0x14) + 6) = local_84[0];
        if ((bool)(bVar3 & local_80[0] < local_6c[0])) {
          bVar3 = local_70[0] == 0 || local_84[0] < local_70[0];
        }
        else {
          bVar3 = false;
        }
        uVar4 = GsBitStream::readBits(param_1,(uchar *)local_80,0x10,true);
        if (((uVar4 & 1) == 0) ||
           (uVar4 = GsBitStream::readBits(param_1,(uchar *)local_84,0x10,true), (uVar4 & 1) == 0))
        break;
        *(ushort *)((BrepTriangle *)pVVar8 + lVar10 * 0x14 + 2) = local_80[0];
        *(ushort *)((BrepTriangle *)pVVar8 + lVar10 * 0x14 + 8) = local_84[0];
        if ((bool)(bVar3 & local_80[0] < local_6c[0])) {
          bVar3 = local_70[0] == 0 || local_84[0] < local_70[0];
        }
        else {
          bVar3 = false;
        }
        uVar4 = GsBitStream::readBits(param_1,(uchar *)local_80,0x10,true);
        if (((uVar4 & 1) == 0) ||
           (uVar4 = GsBitStream::readBits(param_1,(uchar *)local_84,0x10,true), (uVar4 & 1) == 0))
        break;
        *(ushort *)((BrepTriangle *)pVVar8 + lVar10 * 0x14 + 4) = local_80[0];
        *(ushort *)((BrepTriangle *)pVVar8 + lVar10 * 0x14 + 10) = local_84[0];
        if ((bool)(bVar3 & local_80[0] < local_6c[0])) {
          bVar3 = local_70[0] == 0 || local_84[0] < local_70[0];
          if ((ulong)local_74 <= lVar10 + 1U) {
            uVar1 = local_6c[0];
            uVar9 = local_70[0];
            uVar11 = local_74;
            if (local_70[0] != 0 && local_84[0] >= local_70[0]) goto LAB_00b77d14;
            goto LAB_00b77cac;
          }
        }
        else {
          if ((ulong)local_74 <= lVar10 + 1U) {
LAB_00b77d14:
            operator_delete__(pVVar5);
            operator_delete__(pVVar8);
            if (pVVar7 != (Vector3 *)0x0) {
              operator_delete__(pVVar7);
            }
            this = (Brep *)0x0;
            *param_2 = true;
            goto LAB_00b77c70;
          }
          bVar3 = false;
        }
        lVar10 = lVar10 + 1;
        uVar4 = GsBitStream::readBits(param_1,(uchar *)&local_78,0x20,true);
        if ((uVar4 & 1) == 0) break;
      }
    }
    operator_delete__(pVVar5);
    if (pVVar7 != (Vector3 *)0x0) {
      operator_delete__(pVVar7);
    }
LAB_00b77c68:
    operator_delete__(pVVar8);
  }
  this = (Brep *)0x0;
LAB_00b77c70:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


