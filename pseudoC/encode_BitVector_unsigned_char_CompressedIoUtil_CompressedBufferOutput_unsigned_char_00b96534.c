// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _encode<BitVector,unsigned_char,CompressedIoUtil::CompressedBufferOutput<unsigned_char>>
// Entry Point: 00b96534
// Size: 1136 bytes
// Signature: void __cdecl _encode<BitVector,unsigned_char,CompressedIoUtil::CompressedBufferOutput<unsigned_char>>(BitVector * param_1, uint param_2, uint param_3, uint param_4, CompressedBufferOutput * param_5, bool param_6)


/* void RLEUtil::_encode<BitVector, unsigned char, CompressedIoUtil::CompressedBufferOutput<unsigned
   char> >(BitVector const*, unsigned int, unsigned int, unsigned int,
   CompressedIoUtil::CompressedBufferOutput<unsigned char>*, bool) */

void RLEUtil::
     _encode<BitVector,unsigned_char,CompressedIoUtil::CompressedBufferOutput<unsigned_char>>
               (BitVector *param_1,uint param_2,uint param_3,uint param_4,
               CompressedBufferOutput *param_5,bool param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  uint local_64;
  
  if (param_2 != 0) {
    uVar3 = -1 << (ulong)(param_4 & 0x1f);
    uVar14 = *(uint *)(param_5 + 8);
    uVar11 = (ulong)uVar14;
    uVar5 = ***(uint ***)param_1 & (uVar3 ^ 0xffffffff);
    uVar9 = uVar5 & 0xff;
    if (uVar14 == *(uint *)(param_5 + 0xc)) {
      iVar6 = 0x400;
      if (0x3fff < uVar14) {
        iVar6 = 0x4000;
      }
      iVar2 = 0x40;
      if (0x3ff < uVar14) {
        iVar2 = iVar6;
      }
      *(uint *)(param_5 + 0xc) = iVar2 + uVar14;
      pvVar4 = operator_new__((ulong)(iVar2 + uVar14));
      pvVar12 = *(void **)param_5;
      memcpy(pvVar4,pvVar12,uVar11);
      if (pvVar12 != (void *)0x0) {
        operator_delete__(pvVar12);
        uVar11 = (ulong)*(uint *)(param_5 + 8);
      }
      *(void **)param_5 = pvVar4;
    }
    else {
      pvVar4 = *(void **)param_5;
    }
    *(int *)(param_5 + 8) = (int)uVar11 + 1;
    *(char *)((long)pvVar4 + uVar11) = (char)uVar5;
    if (1 < param_2) {
      uVar3 = ~uVar3;
      uVar5 = 1;
      do {
        uVar14 = uVar5 * param_3;
        lVar8 = *(long *)param_1;
        uVar11 = (ulong)(uVar14 >> 3) & 0xffff;
        lVar7 = *(long *)(lVar8 + (ulong)(uVar14 >> 0x13) * 8);
        if ((uint)uVar11 < 0xfffd) {
          uVar13 = *(uint *)(lVar7 + uVar11);
        }
        else {
          uVar13 = (uVar14 >> 3) + 1;
          uVar10 = (uVar14 >> 3) + 2;
          uVar13 = (uint)CONCAT12(*(undefined *)
                                   (*(long *)(lVar8 + (ulong)(uVar10 >> 0x10) * 8) +
                                   ((ulong)uVar10 & 0xffff)),
                                  CONCAT11(*(undefined *)
                                            (*(long *)(lVar8 + (ulong)(uVar13 >> 0x10) * 8) +
                                            ((ulong)uVar13 & 0xffff)),*(undefined *)(lVar7 + uVar11)
                                          ));
        }
        uVar10 = *(uint *)(param_5 + 8);
        if (uVar10 == *(uint *)(param_5 + 0xc)) {
          iVar6 = 0x400;
          if (0x3fff < uVar10) {
            iVar6 = 0x4000;
          }
          iVar2 = 0x40;
          if (0x3ff < uVar10) {
            iVar2 = iVar6;
          }
          *(uint *)(param_5 + 0xc) = iVar2 + uVar10;
          pvVar4 = operator_new__((ulong)(iVar2 + uVar10));
          pvVar12 = *(void **)param_5;
          memcpy(pvVar4,pvVar12,(ulong)uVar10);
          if (pvVar12 != (void *)0x0) {
            operator_delete__(pvVar12);
            uVar10 = *(uint *)(param_5 + 8);
          }
          *(void **)param_5 = pvVar4;
        }
        else {
          pvVar4 = *(void **)param_5;
        }
        uVar5 = uVar5 + 1;
        *(uint *)(param_5 + 8) = uVar10 + 1;
        uVar13 = uVar13 >> (ulong)(uVar14 & 7) & uVar3;
        uVar14 = uVar13 & 0xff;
        *(char *)((long)pvVar4 + (ulong)uVar10) = (char)uVar13;
        local_64 = uVar9;
        if (uVar9 == uVar14) {
          do {
            if (uVar5 < param_2) {
              uVar13 = param_3 * uVar5;
              lVar7 = *(long *)param_1;
              uVar14 = 0;
              while( true ) {
                uVar10 = uVar14;
                uVar11 = (ulong)(uVar13 >> 3) & 0xffff;
                lVar8 = *(long *)(lVar7 + (ulong)(uVar13 >> 0x13) * 8);
                if ((uint)uVar11 < 0xfffd) {
                  uVar14 = *(uint *)(lVar8 + uVar11);
                }
                else {
                  uVar14 = (uVar13 >> 3) + 1;
                  uVar1 = (uVar13 >> 3) + 2;
                  uVar14 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar7 + (ulong)(uVar1 >> 0x10) * 8) +
                                           ((ulong)uVar1 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar7 + (ulong)(uVar14 >> 0x10) * 8)
                                                    + ((ulong)uVar14 & 0xffff)),
                                                   *(undefined *)(lVar8 + uVar11)));
                }
                uVar1 = uVar14 >> (ulong)(uVar13 & 7) & uVar3;
                if (uVar9 != (uVar1 & 0xff)) break;
                uVar14 = uVar10 + 1;
                local_64 = uVar9;
                if ((0xfd < uVar10) || (uVar13 = uVar13 + param_3, param_2 <= uVar5 + 1 + uVar10))
                goto LAB_00b967fc;
              }
              uVar14 = uVar10;
              local_64 = uVar1 & 0xff;
LAB_00b967fc:
              uVar5 = uVar5 + uVar10 + 1;
            }
            else {
              uVar14 = 0;
            }
            uVar13 = *(uint *)(param_5 + 8);
            uVar11 = (ulong)uVar13;
            if (uVar13 == *(uint *)(param_5 + 0xc)) {
              iVar6 = 0x400;
              if (0x3fff < uVar13) {
                iVar6 = 0x4000;
              }
              iVar2 = 0x40;
              if (0x3ff < uVar13) {
                iVar2 = iVar6;
              }
              *(uint *)(param_5 + 0xc) = iVar2 + uVar13;
              pvVar4 = operator_new__((ulong)(iVar2 + uVar13));
              pvVar12 = *(void **)param_5;
              memcpy(pvVar4,pvVar12,uVar11);
              if (pvVar12 != (void *)0x0) {
                operator_delete__(pvVar12);
                uVar11 = (ulong)*(uint *)(param_5 + 8);
              }
              *(void **)param_5 = pvVar4;
            }
            else {
              pvVar4 = *(void **)param_5;
            }
            *(int *)(param_5 + 8) = (int)uVar11 + 1;
            *(char *)((long)pvVar4 + uVar11) = (char)uVar14;
          } while (uVar14 == 0xff);
          uVar14 = local_64;
          if (uVar5 < param_2) {
            uVar9 = *(uint *)(param_5 + 8);
            uVar11 = (ulong)uVar9;
            if (uVar9 == *(uint *)(param_5 + 0xc)) {
              iVar6 = 0x400;
              if (0x3fff < uVar9) {
                iVar6 = 0x4000;
              }
              iVar2 = 0x40;
              if (0x3ff < uVar9) {
                iVar2 = iVar6;
              }
              *(uint *)(param_5 + 0xc) = iVar2 + uVar9;
              pvVar4 = operator_new__((ulong)(iVar2 + uVar9));
              pvVar12 = *(void **)param_5;
              memcpy(pvVar4,pvVar12,uVar11);
              if (pvVar12 != (void *)0x0) {
                operator_delete__(pvVar12);
                uVar11 = (ulong)*(uint *)(param_5 + 8);
              }
              *(void **)param_5 = pvVar4;
            }
            else {
              pvVar4 = *(void **)param_5;
            }
            *(int *)(param_5 + 8) = (int)uVar11 + 1;
            *(char *)((long)pvVar4 + uVar11) = (char)local_64;
          }
        }
        uVar9 = uVar14;
      } while (uVar5 < param_2);
    }
    if (param_6) {
      uVar9 = *(uint *)(param_5 + 8);
      uVar11 = (ulong)uVar9;
      if (uVar9 == *(uint *)(param_5 + 0xc)) {
        iVar6 = 0x400;
        if (0x3fff < uVar9) {
          iVar6 = 0x4000;
        }
        iVar2 = 0x40;
        if (0x3ff < uVar9) {
          iVar2 = iVar6;
        }
        *(uint *)(param_5 + 0xc) = iVar2 + uVar9;
        pvVar4 = operator_new__((ulong)(iVar2 + uVar9));
        pvVar12 = *(void **)param_5;
        memcpy(pvVar4,pvVar12,uVar11);
        if (pvVar12 != (void *)0x0) {
          operator_delete__(pvVar12);
          uVar11 = (ulong)*(uint *)(param_5 + 8);
        }
        *(void **)param_5 = pvVar4;
      }
      else {
        pvVar4 = *(void **)param_5;
      }
      *(int *)(param_5 + 8) = (int)uVar11 + 1;
      *(undefined *)((long)pvVar4 + uVar11) = 0;
    }
  }
  return;
}


