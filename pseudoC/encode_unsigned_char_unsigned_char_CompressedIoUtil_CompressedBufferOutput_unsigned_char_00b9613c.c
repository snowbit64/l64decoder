// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _encode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedBufferOutput<unsigned_char>>
// Entry Point: 00b9613c
// Size: 836 bytes
// Signature: void __cdecl _encode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedBufferOutput<unsigned_char>>(uchar * param_1, uint param_2, uint param_3, uint param_4, CompressedBufferOutput * param_5, bool param_6)


/* void RLEUtil::_encode<unsigned char, unsigned char,
   CompressedIoUtil::CompressedBufferOutput<unsigned char> >(unsigned char const*, unsigned int,
   unsigned int, unsigned int, CompressedIoUtil::CompressedBufferOutput<unsigned char>*, bool) */

void RLEUtil::
     _encode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedBufferOutput<unsigned_char>>
               (uchar *param_1,uint param_2,uint param_3,uint param_4,
               CompressedBufferOutput *param_5,bool param_6)

{
  long lVar1;
  int iVar2;
  uchar uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uchar uVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  uchar uVar12;
  uint uVar13;
  
  if (param_2 != 0) {
    uVar13 = *(uint *)(param_5 + 8);
    uVar10 = (ulong)uVar13;
    uVar8 = *param_1;
    if (uVar13 == *(uint *)(param_5 + 0xc)) {
      iVar5 = 0x400;
      if (0x3fff < uVar13) {
        iVar5 = 0x4000;
      }
      iVar6 = 0x40;
      if (0x3ff < uVar13) {
        iVar6 = iVar5;
      }
      *(uint *)(param_5 + 0xc) = iVar6 + uVar13;
      pvVar4 = operator_new__((ulong)(iVar6 + uVar13));
      pvVar11 = *(void **)param_5;
      memcpy(pvVar4,pvVar11,uVar10);
      if (pvVar11 != (void *)0x0) {
        operator_delete__(pvVar11);
        uVar10 = (ulong)*(uint *)(param_5 + 8);
      }
      *(void **)param_5 = pvVar4;
    }
    else {
      pvVar4 = *(void **)param_5;
    }
    *(int *)(param_5 + 8) = (int)uVar10 + 1;
    *(uchar *)((long)pvVar4 + uVar10) = uVar8;
    if (1 < param_2) {
      uVar13 = 1;
      do {
        uVar7 = *(uint *)(param_5 + 8);
        uVar10 = (ulong)uVar7;
        uVar3 = param_1[uVar13];
        if (uVar7 == *(uint *)(param_5 + 0xc)) {
          iVar5 = 0x400;
          if (0x3fff < uVar7) {
            iVar5 = 0x4000;
          }
          iVar6 = 0x40;
          if (0x3ff < uVar7) {
            iVar6 = iVar5;
          }
          *(uint *)(param_5 + 0xc) = iVar6 + uVar7;
          pvVar4 = operator_new__((ulong)(iVar6 + uVar7));
          pvVar11 = *(void **)param_5;
          memcpy(pvVar4,pvVar11,uVar10);
          if (pvVar11 != (void *)0x0) {
            operator_delete__(pvVar11);
            uVar10 = (ulong)*(uint *)(param_5 + 8);
          }
          *(void **)param_5 = pvVar4;
        }
        else {
          pvVar4 = *(void **)param_5;
        }
        uVar13 = uVar13 + 1;
        *(int *)(param_5 + 8) = (int)uVar10 + 1;
        *(uchar *)((long)pvVar4 + uVar10) = uVar3;
        uVar12 = uVar8;
        if (uVar3 == uVar8) {
          do {
            if (uVar13 < param_2) {
              uVar10 = 0;
              while( true ) {
                uVar7 = (uint)uVar10;
                if (param_1[uVar10 + uVar13] != uVar8) break;
                uVar9 = uVar10 + 1;
                uVar12 = uVar8;
                if ((0xfd < uVar7) ||
                   (lVar1 = uVar13 + uVar10, uVar10 = uVar9, (ulong)param_2 <= lVar1 + 1U))
                goto LAB_00b96310;
              }
              uVar9 = uVar10 & 0xffffffff;
              uVar12 = param_1[uVar10 + uVar13];
LAB_00b96310:
              iVar5 = (int)uVar9;
              uVar13 = uVar13 + uVar7 + 1;
            }
            else {
              iVar5 = 0;
            }
            uVar7 = *(uint *)(param_5 + 8);
            uVar10 = (ulong)uVar7;
            if (uVar7 == *(uint *)(param_5 + 0xc)) {
              iVar6 = 0x400;
              if (0x3fff < uVar7) {
                iVar6 = 0x4000;
              }
              iVar2 = 0x40;
              if (0x3ff < uVar7) {
                iVar2 = iVar6;
              }
              *(uint *)(param_5 + 0xc) = iVar2 + uVar7;
              pvVar4 = operator_new__((ulong)(iVar2 + uVar7));
              pvVar11 = *(void **)param_5;
              memcpy(pvVar4,pvVar11,uVar10);
              if (pvVar11 != (void *)0x0) {
                operator_delete__(pvVar11);
                uVar10 = (ulong)*(uint *)(param_5 + 8);
              }
              *(void **)param_5 = pvVar4;
            }
            else {
              pvVar4 = *(void **)param_5;
            }
            *(int *)(param_5 + 8) = (int)uVar10 + 1;
            *(char *)((long)pvVar4 + uVar10) = (char)iVar5;
          } while (iVar5 == 0xff);
          uVar3 = uVar12;
          if (uVar13 < param_2) {
            uVar7 = *(uint *)(param_5 + 8);
            uVar10 = (ulong)uVar7;
            if (uVar7 == *(uint *)(param_5 + 0xc)) {
              iVar5 = 0x400;
              if (0x3fff < uVar7) {
                iVar5 = 0x4000;
              }
              iVar6 = 0x40;
              if (0x3ff < uVar7) {
                iVar6 = iVar5;
              }
              *(uint *)(param_5 + 0xc) = iVar6 + uVar7;
              pvVar4 = operator_new__((ulong)(iVar6 + uVar7));
              pvVar11 = *(void **)param_5;
              memcpy(pvVar4,pvVar11,uVar10);
              if (pvVar11 != (void *)0x0) {
                operator_delete__(pvVar11);
                uVar10 = (ulong)*(uint *)(param_5 + 8);
              }
              *(void **)param_5 = pvVar4;
            }
            else {
              pvVar4 = *(void **)param_5;
            }
            *(int *)(param_5 + 8) = (int)uVar10 + 1;
            *(uchar *)((long)pvVar4 + uVar10) = uVar12;
          }
        }
        uVar8 = uVar3;
      } while (uVar13 < param_2);
    }
    if (param_6) {
      uVar13 = *(uint *)(param_5 + 8);
      uVar10 = (ulong)uVar13;
      if (uVar13 == *(uint *)(param_5 + 0xc)) {
        iVar5 = 0x400;
        if (0x3fff < uVar13) {
          iVar5 = 0x4000;
        }
        iVar6 = 0x40;
        if (0x3ff < uVar13) {
          iVar6 = iVar5;
        }
        *(uint *)(param_5 + 0xc) = iVar6 + uVar13;
        pvVar4 = operator_new__((ulong)(iVar6 + uVar13));
        pvVar11 = *(void **)param_5;
        memcpy(pvVar4,pvVar11,uVar10);
        if (pvVar11 != (void *)0x0) {
          operator_delete__(pvVar11);
          uVar10 = (ulong)*(uint *)(param_5 + 8);
        }
        *(void **)param_5 = pvVar4;
      }
      else {
        pvVar4 = *(void **)param_5;
      }
      *(int *)(param_5 + 8) = (int)uVar10 + 1;
      *(undefined *)((long)pvVar4 + uVar10) = 0;
    }
  }
  return;
}


