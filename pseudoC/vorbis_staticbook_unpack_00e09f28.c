// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_staticbook_unpack
// Entry Point: 00e09f28
// Size: 940 bytes
// Signature: undefined vorbis_staticbook_unpack(void)


ulong * vorbis_staticbook_unpack(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong __size;
  long lVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  puVar5 = (ulong *)calloc(1,0x48);
  *(int *)(puVar5 + 8) = 1;
  puVar6 = (undefined *)oggpack_read(param_1,0x18);
  if (puVar6 == &DAT_00564342) {
    uVar7 = oggpack_read(param_1,0x10);
    *puVar5 = uVar7;
    __size = oggpack_read(param_1,0x18);
    puVar5[1] = __size;
    if (__size != 0xffffffffffffffff) {
      iVar1 = ov_ilog(uVar7 & 0xffffffff);
      iVar2 = ov_ilog(__size & 0xffffffff);
      if (iVar2 + iVar1 < 0x19) {
        iVar1 = oggpack_read(param_1,1);
        if (iVar1 == 1) {
          lVar8 = oggpack_read(param_1,5);
          lVar12 = lVar8 + 1;
          if (lVar8 == -1) goto LAB_00e0a25c;
          pvVar10 = malloc(__size);
          puVar5[2] = (ulong)pvVar10;
          if (0 < (long)__size) {
            lVar8 = 0;
            do {
              while( true ) {
                uVar3 = ov_ilog(__size - lVar8 & 0xffffffff);
                lVar9 = oggpack_read(param_1,uVar3);
                if (((lVar9 == -1) || (0x20 < lVar12)) || ((long)(__size - lVar8) < lVar9))
                goto LAB_00e0a25c;
                if (lVar9 < 1) break;
                if (1 < lVar9 - 1U >> (lVar12 - 1U & 0x3f)) goto LAB_00e0a25c;
                lVar13 = lVar9 + lVar8;
                do {
                  lVar9 = lVar9 + -1;
                  *(char *)(puVar5[2] + lVar8) = (char)lVar12;
                  lVar8 = lVar8 + 1;
                } while (lVar9 != 0);
                __size = puVar5[1];
                lVar12 = lVar12 + 1;
                lVar8 = lVar13;
                if ((long)__size <= lVar13) goto LAB_00e0a188;
              }
              lVar12 = lVar12 + 1;
            } while (lVar8 < (long)__size);
          }
        }
        else {
          if (iVar1 != 0) goto LAB_00e0a25c;
          lVar8 = oggpack_read(param_1,1);
          lVar12 = 5;
          if (lVar8 != 0) {
            lVar12 = 1;
          }
          lVar13 = *(long *)(param_1 + 0x20);
          lVar9 = oggpack_bytes(param_1);
          if (lVar13 - lVar9 < (long)(lVar12 * __size + 7) >> 3) goto LAB_00e0a25c;
          pvVar10 = malloc(__size);
          puVar5[2] = (ulong)pvVar10;
          if (lVar8 == 0) {
            if (0 < (long)__size) {
              lVar12 = 0;
              do {
                lVar8 = oggpack_read(param_1,5);
                if (lVar8 == -1) goto LAB_00e0a25c;
                *(char *)(puVar5[2] + lVar12) = (char)lVar8 + '\x01';
                lVar12 = lVar12 + 1;
                __size = puVar5[1];
              } while (lVar12 < (long)__size);
            }
          }
          else if (0 < (long)__size) {
            lVar12 = 0;
            do {
              while (lVar8 = oggpack_read(param_1,1), lVar8 != 0) {
                lVar8 = oggpack_read(param_1,5);
                if (lVar8 == -1) goto LAB_00e0a25c;
                *(char *)(puVar5[2] + lVar12) = (char)lVar8 + '\x01';
                lVar12 = lVar12 + 1;
                __size = puVar5[1];
                if ((long)__size <= lVar12) goto LAB_00e0a188;
              }
              *(undefined *)(puVar5[2] + lVar12) = 0;
              lVar12 = lVar12 + 1;
              __size = puVar5[1];
            } while (lVar12 < (long)__size);
          }
        }
LAB_00e0a188:
        iVar1 = oggpack_read(param_1,4);
        *(int *)(puVar5 + 3) = iVar1;
        if (iVar1 - 1U < 2) {
          uVar7 = oggpack_read(param_1,0x20);
          puVar5[4] = uVar7;
          uVar7 = oggpack_read(param_1,0x20);
          puVar5[5] = uVar7;
          iVar2 = oggpack_read(param_1,4);
          iVar2 = iVar2 + 1;
          *(int *)(puVar5 + 6) = iVar2;
          iVar4 = oggpack_read(param_1,1);
          *(int *)((long)puVar5 + 0x34) = iVar4;
          if (iVar4 != -1) {
            if (iVar1 == 2) {
              uVar7 = (ulong)(uint)(*(int *)puVar5 * (int)__size);
            }
            else if ((iVar1 == 1) && (*puVar5 != 0)) {
              uVar7 = _book_maptype1_quantvals(puVar5);
              iVar2 = *(int *)(puVar5 + 6);
              uVar7 = uVar7 & 0xffffffff;
            }
            else {
              uVar7 = 0;
            }
            iVar1 = (int)uVar7;
            lVar8 = *(long *)(param_1 + 0x20);
            lVar12 = oggpack_bytes(param_1);
            if ((long)(iVar2 * iVar1 + 7 >> 3) <= lVar8 - lVar12) {
              pvVar10 = malloc(-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3);
              puVar5[7] = (ulong)pvVar10;
              if (0 < iVar1) {
                lVar12 = 0;
                do {
                  uVar11 = oggpack_read(param_1,*(int *)(puVar5 + 6));
                  pvVar10 = (void *)puVar5[7];
                  *(undefined8 *)((long)pvVar10 + lVar12 * 8) = uVar11;
                  lVar12 = lVar12 + 1;
                } while (iVar1 != lVar12);
              }
              if (iVar1 == 0) {
                return puVar5;
              }
              if (*(long *)((long)pvVar10 + (long)(iVar1 + -1) * 8) != -1) {
                return puVar5;
              }
            }
          }
        }
        else if (iVar1 == 0) {
          return puVar5;
        }
      }
    }
  }
LAB_00e0a25c:
  vorbis_staticbook_destroy(puVar5);
  return (ulong *)0x0;
}


