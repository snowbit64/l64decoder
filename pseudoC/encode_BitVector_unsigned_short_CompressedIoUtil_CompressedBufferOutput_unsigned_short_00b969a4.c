// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _encode<BitVector,unsigned_short,CompressedIoUtil::CompressedBufferOutput<unsigned_short>>
// Entry Point: 00b969a4
// Size: 1224 bytes
// Signature: void __cdecl _encode<BitVector,unsigned_short,CompressedIoUtil::CompressedBufferOutput<unsigned_short>>(BitVector * param_1, uint param_2, uint param_3, uint param_4, CompressedBufferOutput * param_5, bool param_6)


/* void RLEUtil::_encode<BitVector, unsigned short,
   CompressedIoUtil::CompressedBufferOutput<unsigned short> >(BitVector const*, unsigned int,
   unsigned int, unsigned int, CompressedIoUtil::CompressedBufferOutput<unsigned short>*, bool) */

void RLEUtil::
     _encode<BitVector,unsigned_short,CompressedIoUtil::CompressedBufferOutput<unsigned_short>>
               (BitVector *param_1,uint param_2,uint param_3,uint param_4,
               CompressedBufferOutput *param_5,bool param_6)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *__src;
  int iVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  uint uVar8;
  void *__src_00;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  
  if (param_2 != 0) {
    uVar2 = -1 << (ulong)(param_4 & 0x1f);
    uVar12 = *(uint *)(param_5 + 8);
    uVar13 = (ulong)uVar12;
    uVar8 = ***(uint ***)param_1 & (uVar2 ^ 0xffffffff);
    uVar9 = uVar8 & 0xffff;
    if (uVar12 == *(uint *)(param_5 + 0xc)) {
      iVar4 = 0x400;
      if (0x3fff < uVar12) {
        iVar4 = 0x4000;
      }
      iVar1 = 0x40;
      if (0x3ff < uVar12) {
        iVar1 = iVar4;
      }
      *(uint *)(param_5 + 0xc) = iVar1 + uVar12;
      pvVar3 = operator_new__((ulong)(iVar1 + uVar12) << 1);
      pvVar7 = *(void **)param_5;
      memcpy(pvVar3,pvVar7,uVar13 << 1);
      if (pvVar7 != (void *)0x0) {
        operator_delete__(pvVar7);
        uVar13 = (ulong)*(uint *)(param_5 + 8);
      }
      *(void **)param_5 = pvVar3;
    }
    else {
      pvVar3 = *(void **)param_5;
    }
    uVar12 = (int)uVar13 + 1;
    uVar15 = (ulong)uVar12;
    *(short *)((long)pvVar3 + uVar13 * 2) = (short)uVar8;
    *(uint *)(param_5 + 8) = uVar12;
    pvVar7 = pvVar3;
    if (1 < param_2) {
      uVar2 = ~uVar2;
      uVar8 = 1;
      __src = pvVar3;
      __src_00 = pvVar3;
      uVar13 = uVar15;
      do {
        uVar12 = uVar8 * param_3;
        lVar6 = *(long *)param_1;
        uVar15 = (ulong)(uVar12 >> 3) & 0xffff;
        lVar5 = *(long *)(lVar6 + (ulong)(uVar12 >> 0x13) * 8);
        if ((uint)uVar15 < 0xfffd) {
          uVar10 = *(uint *)(lVar5 + uVar15);
        }
        else {
          uVar10 = (uVar12 >> 3) + 1;
          uVar14 = (uVar12 >> 3) + 2;
          uVar10 = (uint)CONCAT12(*(undefined *)
                                   (*(long *)(lVar6 + (ulong)(uVar14 >> 0x10) * 8) +
                                   ((ulong)uVar14 & 0xffff)),
                                  CONCAT11(*(undefined *)
                                            (*(long *)(lVar6 + (ulong)(uVar10 >> 0x10) * 8) +
                                            ((ulong)uVar10 & 0xffff)),*(undefined *)(lVar5 + uVar15)
                                          ));
        }
        uVar14 = (uint)uVar13;
        if (uVar14 == *(uint *)(param_5 + 0xc)) {
          iVar4 = 0x400;
          if (0x3fff < uVar14) {
            iVar4 = 0x4000;
          }
          iVar1 = 0x40;
          if (0x3ff < uVar14) {
            iVar1 = iVar4;
          }
          *(uint *)(param_5 + 0xc) = iVar1 + uVar14;
          pvVar3 = operator_new__((ulong)(iVar1 + uVar14) << 1);
          memcpy(pvVar3,__src_00,uVar13 << 1);
          if (__src_00 != (void *)0x0) {
            operator_delete__(__src_00);
            uVar13 = (ulong)*(uint *)(param_5 + 8);
          }
          *(void **)param_5 = pvVar3;
          __src = pvVar3;
          pvVar7 = pvVar3;
          __src_00 = pvVar3;
        }
        uVar14 = (int)uVar13 + 1;
        uVar15 = (ulong)uVar14;
        uVar8 = uVar8 + 1;
        uVar10 = uVar10 >> (ulong)(uVar12 & 7) & uVar2;
        *(uint *)(param_5 + 8) = uVar14;
        uVar12 = uVar10 & 0xffff;
        *(short *)((long)pvVar7 + uVar13 * 2) = (short)uVar10;
        uVar13 = uVar15;
        uVar10 = uVar9;
        if (uVar9 == uVar12) {
          do {
            if (uVar8 < param_2) {
              uVar14 = param_3 * uVar8;
              lVar5 = *(long *)param_1;
              uVar12 = 0;
              while( true ) {
                uVar11 = uVar12;
                uVar15 = (ulong)(uVar14 >> 3) & 0xffff;
                lVar6 = *(long *)(lVar5 + (ulong)(uVar14 >> 0x13) * 8);
                if ((uint)uVar15 < 0xfffd) {
                  uVar12 = *(uint *)(lVar6 + uVar15);
                }
                else {
                  uVar12 = (uVar14 >> 3) + 1;
                  uVar10 = (uVar14 >> 3) + 2;
                  uVar12 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar5 + (ulong)(uVar10 >> 0x10) * 8) +
                                           ((ulong)uVar10 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar5 + (ulong)(uVar12 >> 0x10) * 8)
                                                    + ((ulong)uVar12 & 0xffff)),
                                                   *(undefined *)(lVar6 + uVar15)));
                }
                uVar10 = uVar12 >> (ulong)(uVar14 & 7) & uVar2;
                if (uVar9 != (uVar10 & 0xffff)) break;
                uVar12 = uVar11 + 1;
                uVar10 = uVar9;
                if ((0xfffd < uVar11) || (uVar14 = uVar14 + param_3, param_2 <= uVar8 + 1 + uVar11))
                goto LAB_00b96cb0;
              }
              uVar12 = uVar11;
              uVar10 = uVar10 & 0xffff;
LAB_00b96cb0:
              uVar8 = uVar8 + uVar11 + 1;
            }
            else {
              uVar12 = 0;
            }
            uVar14 = (uint)uVar13;
            if (uVar14 == *(uint *)(param_5 + 0xc)) {
              iVar4 = 0x400;
              if (0x3fff < uVar14) {
                iVar4 = 0x4000;
              }
              iVar1 = 0x40;
              if (0x3ff < uVar14) {
                iVar1 = iVar4;
              }
              *(uint *)(param_5 + 0xc) = iVar1 + uVar14;
              pvVar3 = operator_new__((ulong)(iVar1 + uVar14) << 1);
              memcpy(pvVar3,__src,uVar13 << 1);
              if (__src != (void *)0x0) {
                operator_delete__(__src);
                uVar13 = (ulong)*(uint *)(param_5 + 8);
              }
              *(void **)param_5 = pvVar3;
              __src = pvVar3;
              pvVar7 = pvVar3;
            }
            uVar14 = (int)uVar13 + 1;
            uVar15 = (ulong)uVar14;
            *(short *)((long)pvVar7 + uVar13 * 2) = (short)uVar12;
            *(uint *)(param_5 + 8) = uVar14;
            uVar13 = uVar15;
          } while (uVar12 == 0xffff);
          __src_00 = pvVar7;
          uVar12 = uVar10;
          if (uVar8 < param_2) {
            __src = pvVar7;
            if (uVar14 == *(uint *)(param_5 + 0xc)) {
              iVar4 = 0x400;
              if (0x3fff < uVar14) {
                iVar4 = 0x4000;
              }
              iVar1 = 0x40;
              if (0x3ff < uVar14) {
                iVar1 = iVar4;
              }
              *(uint *)(param_5 + 0xc) = iVar1 + uVar14;
              __src = operator_new__((ulong)(iVar1 + uVar14) << 1);
              memcpy(__src,pvVar3,uVar15 << 1);
              if (pvVar3 != (void *)0x0) {
                operator_delete__(pvVar3);
                uVar14 = *(uint *)(param_5 + 8);
              }
              *(void **)param_5 = __src;
              pvVar3 = __src;
            }
            *(short *)((long)__src + (ulong)uVar14 * 2) = (short)uVar10;
            uVar15 = (ulong)(uVar14 + 1);
            *(uint *)(param_5 + 8) = uVar14 + 1;
            pvVar7 = __src;
            __src_00 = __src;
          }
        }
        uVar9 = uVar12;
        uVar13 = uVar15;
      } while (uVar8 < param_2);
    }
    uVar9 = (uint)uVar15;
    if (param_6) {
      pvVar3 = pvVar7;
      if (uVar9 == *(uint *)(param_5 + 0xc)) {
        iVar4 = 0x400;
        if (0x3fff < uVar9) {
          iVar4 = 0x4000;
        }
        iVar1 = 0x40;
        if (0x3ff < uVar9) {
          iVar1 = iVar4;
        }
        *(uint *)(param_5 + 0xc) = iVar1 + uVar9;
        pvVar3 = operator_new__((ulong)(iVar1 + uVar9) << 1);
        memcpy(pvVar3,pvVar7,uVar15 << 1);
        if (pvVar7 != (void *)0x0) {
          operator_delete__(pvVar7);
          uVar9 = *(uint *)(param_5 + 8);
        }
        *(void **)param_5 = pvVar3;
      }
      *(undefined2 *)((long)pvVar3 + (ulong)uVar9 * 2) = 0;
      *(uint *)(param_5 + 8) = uVar9 + 1;
    }
  }
  return;
}


