// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_text_2
// Entry Point: 00dc2dfc
// Size: 860 bytes
// Signature: undefined png_set_text_2(void)


undefined4 png_set_text_2(long param_1,long param_2,int *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  size_t __n;
  void *pvVar6;
  int iVar7;
  long lVar8;
  void **ppvVar9;
  long lVar10;
  undefined4 uVar11;
  size_t __n_00;
  ulong uVar12;
  int *local_70;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if ((int)param_4 < 1) {
    return 0;
  }
  iVar7 = *(int *)(param_2 + 0x94);
  if (*(int *)(param_2 + 0x98) - iVar7 < (int)param_4) {
    if (param_4 <= 0x7fffffffU - iVar7) {
      uVar1 = iVar7 + param_4 + 8 & 0xfffffff8;
      if (0x7ffffff6 < (int)(iVar7 + param_4)) {
        uVar1 = 0x7fffffff;
      }
      lVar2 = png_realloc_array(param_1,*(undefined8 *)(param_2 + 0xa0),iVar7,uVar1 - iVar7,0x38);
      if (lVar2 != 0) {
        png_free(param_1,*(undefined8 *)(param_2 + 0xa0));
        *(long *)(param_2 + 0xa0) = lVar2;
        *(uint *)(param_2 + 0x98) = uVar1;
        *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x4000;
        goto LAB_00dc2ec0;
      }
    }
    pcVar5 = "too many text chunks";
LAB_00dc3128:
    uVar11 = 1;
    png_chunk_report(param_1,pcVar5,1);
  }
  else {
LAB_00dc2ec0:
    uVar12 = (ulong)param_4;
    do {
      if (*(char **)(param_3 + 2) != (char *)0x0) {
        if (*param_3 - 3U < 0xfffffffc) {
          png_chunk_report(param_1,"text compression mode is out of range",1);
        }
        else {
          lVar2 = *(long *)(param_2 + 0xa0);
          lVar8 = (long)*(int *)(param_2 + 0x94);
          sVar3 = strlen(*(char **)(param_3 + 2));
          if (*param_3 < 1) {
            sVar4 = 0;
            pcVar5 = *(char **)(param_3 + 4);
joined_r0x00dc2f70:
            local_70 = (int *)(lVar2 + lVar8 * 0x38);
            __n = 0;
            if (pcVar5 == (char *)0x0) goto LAB_00dc2fb4;
LAB_00dc2f9c:
            if (*pcVar5 == '\0') goto LAB_00dc2fb4;
            __n_00 = strlen(pcVar5);
            iVar7 = *param_3;
          }
          else {
            if (*(char **)(param_3 + 10) == (char *)0x0) {
              sVar4 = 0;
              pcVar5 = *(char **)(param_3 + 0xc);
            }
            else {
              sVar4 = strlen(*(char **)(param_3 + 10));
              pcVar5 = *(char **)(param_3 + 0xc);
            }
            if (pcVar5 == (char *)0x0) {
              pcVar5 = *(char **)(param_3 + 4);
              goto joined_r0x00dc2f70;
            }
            __n = strlen(pcVar5);
            local_70 = (int *)(lVar2 + lVar8 * 0x38);
            pcVar5 = *(char **)(param_3 + 4);
            if (pcVar5 != (char *)0x0) goto LAB_00dc2f9c;
LAB_00dc2fb4:
            if (*param_3 < 1) {
              __n_00 = 0;
              iVar7 = -1;
            }
            else {
              __n_00 = 0;
              iVar7 = 1;
            }
          }
          *local_70 = iVar7;
          pvVar6 = (void *)png_malloc_base(param_1,sVar3 + sVar4 + __n + __n_00 + 4);
          ppvVar9 = (void **)(lVar2 + lVar8 * 0x38 + 8);
          *ppvVar9 = pvVar6;
          if (pvVar6 == (void *)0x0) {
            pcVar5 = "text chunk: out of memory";
            goto LAB_00dc3128;
          }
          memcpy(pvVar6,*(void **)(param_3 + 2),sVar3);
          *(undefined *)((long)*ppvVar9 + sVar3) = 0;
          if (*param_3 < 1) {
            lVar10 = lVar2 + lVar8 * 0x38;
            *(undefined8 *)(lVar10 + 0x28) = 0;
            *(undefined8 *)(lVar10 + 0x30) = 0;
            pvVar6 = (void *)((long)*ppvVar9 + sVar3 + 1);
            ppvVar9 = (void **)(lVar2 + lVar8 * 0x38 + 0x10);
            *ppvVar9 = pvVar6;
          }
          else {
            lVar10 = lVar2 + lVar8 * 0x38;
            pvVar6 = (void *)((long)*ppvVar9 + sVar3 + 1);
            *(void **)(lVar10 + 0x28) = pvVar6;
            memcpy(pvVar6,*(void **)(param_3 + 10),sVar4);
            *(undefined *)(*(long *)(lVar10 + 0x28) + sVar4) = 0;
            pvVar6 = (void *)(*(long *)(lVar10 + 0x28) + sVar4 + 1);
            ppvVar9 = (void **)(lVar10 + 0x30);
            *ppvVar9 = pvVar6;
            memcpy(pvVar6,*(void **)(param_3 + 0xc),__n);
            *(undefined *)((long)*ppvVar9 + __n) = 0;
            pvVar6 = (void *)((long)*ppvVar9 + __n + 1);
            ppvVar9 = (void **)(lVar2 + lVar8 * 0x38 + 0x10);
            *ppvVar9 = pvVar6;
          }
          if (__n_00 != 0) {
            memcpy(pvVar6,*(void **)(param_3 + 4),__n_00);
            pvVar6 = *ppvVar9;
          }
          *(undefined *)((long)pvVar6 + __n_00) = 0;
          lVar2 = lVar2 + lVar8 * 0x38;
          sVar3 = __n_00;
          sVar4 = 0;
          if (*local_70 < 1) {
            sVar3 = 0;
            sVar4 = __n_00;
          }
          *(size_t *)(lVar2 + 0x18) = sVar4;
          *(size_t *)(lVar2 + 0x20) = sVar3;
          *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + 1;
        }
      }
      param_3 = param_3 + 0xe;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar11 = 0;
  }
  return uVar11;
}


