// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_pCAL
// Entry Point: 00dc249c
// Size: 636 bytes
// Signature: undefined png_set_pCAL(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


void png_set_pCAL(long param_1,long param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,uint param_7,char *param_8,char **param_9)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  char **ppcVar7;
  ulong uVar8;
  char *pcVar9;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (char *)0x0)) ||
     ((param_8 == (char *)0x0 || ((0 < (int)param_7 && (param_9 == (char **)0x0)))))) {
    return;
  }
  sVar2 = strlen(param_3);
  if (param_6 < 4) {
    if (param_7 < 0x100) {
      if (param_7 != 0) {
        uVar8 = (ulong)param_7;
        ppcVar7 = param_9;
        do {
          pcVar9 = *ppcVar7;
          if (pcVar9 == (char *)0x0) {
LAB_00dc2698:
            pcVar9 = "Invalid format for pCAL parameter";
            goto LAB_00dc26ac;
          }
          sVar3 = strlen(pcVar9);
          iVar1 = png_check_fp_string(pcVar9,sVar3);
          if (iVar1 == 0) goto LAB_00dc2698;
          ppcVar7 = ppcVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      pvVar4 = (void *)png_malloc_warn(param_1,sVar2 + 1);
      *(void **)(param_2 + 0x108) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        memcpy(pvVar4,param_3,sVar2 + 1);
        *(undefined4 *)(param_2 + 0x110) = param_4;
        *(char *)(param_2 + 0x128) = (char)param_6;
        *(undefined4 *)(param_2 + 0x114) = param_5;
        *(char *)(param_2 + 0x129) = (char)param_7;
        sVar2 = strlen(param_8);
        pvVar4 = (void *)png_malloc_warn(param_1,sVar2 + 1);
        *(void **)(param_2 + 0x118) = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pcVar9 = "Insufficient memory for pCAL units";
        }
        else {
          memcpy(pvVar4,param_8,sVar2 + 1);
          sVar2 = (ulong)(param_7 + 1) << 3;
          pvVar4 = (void *)png_malloc_warn(param_1,sVar2);
          *(void **)(param_2 + 0x120) = pvVar4;
          if (pvVar4 != (void *)0x0) {
            memset(pvVar4,0,sVar2);
            if (0 < (int)param_7) {
              lVar6 = 0;
              do {
                sVar2 = strlen(*(char **)((long)param_9 + lVar6));
                uVar5 = png_malloc_warn(param_1,sVar2 + 1);
                *(undefined8 *)(*(long *)(param_2 + 0x120) + lVar6) = uVar5;
                pvVar4 = *(void **)(*(long *)(param_2 + 0x120) + lVar6);
                if (pvVar4 == (void *)0x0) {
                  pcVar9 = "Insufficient memory for pCAL parameter";
                  goto LAB_00dc26f4;
                }
                memcpy(pvVar4,*(void **)((long)param_9 + lVar6),sVar2 + 1);
                lVar6 = lVar6 + 8;
              } while ((ulong)param_7 * 8 - lVar6 != 0);
            }
            *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
            *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x80;
            return;
          }
          pcVar9 = "Insufficient memory for pCAL params";
        }
LAB_00dc26f4:
        png_warning(param_1,pcVar9);
        return;
      }
      pcVar9 = "Insufficient memory for pCAL purpose";
    }
    else {
      pcVar9 = "Invalid pCAL parameter count";
    }
  }
  else {
    pcVar9 = "Invalid pCAL equation type";
  }
LAB_00dc26ac:
  png_chunk_report(param_1,pcVar9,1);
  return;
}


