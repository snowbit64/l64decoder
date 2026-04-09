// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeMetalArguments
// Entry Point: 00c2f110
// Size: 1072 bytes
// Signature: undefined __cdecl writeMetalArguments(ConversionContext * param_1, CodeStringStream * param_2, vector * param_3, bool param_4, bool param_5)


/* IR_HllConvertUtil::writeMetalArguments(IR_HllConvertUtil::ConversionContext&, CodeStringStream&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> > const&, bool, bool) */

void IR_HllConvertUtil::writeMetalArguments
               (ConversionContext *param_1,CodeStringStream *param_2,vector *param_3,bool param_4,
               bool param_5)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  uint local_b0;
  undefined local_a8 [64];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  plVar10 = *(long **)(param_1 + 0x18);
  lVar12 = *plVar10;
  if (plVar10[1] != lVar12) {
    local_b0 = 5;
    uVar15 = 0;
    uVar16 = 1;
    do {
      pbVar1 = (byte *)(lVar12 + uVar15 * 0x40);
      if (pbVar1[0x19] == 0) {
        pbVar4 = pbVar1 + 1;
        if ((*pbVar1 & 1) != 0) {
          pbVar4 = *(byte **)(pbVar1 + 0x10);
        }
        if ((param_5 & 1U) != 0) {
          CodeStringStream::writeLine((char *)param_2,&DAT_005097bc);
        }
        if (param_4) {
          CodeStringStream::writeLine
                    ((char *)param_2,"constant CB_%s& %s [[buffer(%d)]]",pbVar4,pbVar4,
                     (ulong)local_b0);
        }
        else {
          CodeStringStream::writeLine((char *)param_2,"constant CB_%s& %s",pbVar4,pbVar4);
        }
        local_b0 = local_b0 + 1;
        param_5 = true;
        plVar10 = *(long **)(param_1 + 0x18);
      }
      lVar12 = *plVar10;
      bVar9 = uVar16 < (ulong)(plVar10[1] - lVar12 >> 6);
      uVar15 = uVar16;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (bVar9);
  }
  lVar12 = *(long *)param_3;
  if (*(long *)(param_3 + 8) != lVar12) {
    uVar15 = 0;
    uVar16 = 1;
    do {
      puVar2 = (uint *)(lVar12 + uVar15 * 0x40);
      if ((!param_4) || (1 < *puVar2)) {
        local_a8[0] = 0;
        puVar17 = puVar2 + 6;
        plVar10 = (long *)(puVar2 + 10);
        lVar13 = *plVar10;
        if ((*(byte *)puVar17 & 1) == 0) {
          lVar13 = (long)puVar2 + 0x19;
        }
        if (param_4) {
          lVar3 = lVar12 + uVar15 * 0x40;
          puVar11 = *(undefined8 **)(lVar3 + 0x38);
          if (puVar11 != (undefined8 *)0x0) {
            lVar13 = puVar11[2];
          }
          piVar14 = *(int **)(lVar3 + 0x10);
          if (((piVar14 == (int *)0x0) || (*piVar14 != 7)) || (piVar14[4] != 6)) {
            uVar7 = *puVar2;
            if (uVar7 - 2 < 2) {
              FUN_00c2f578(local_a8,0x40," [[texture(%d)]]",
                           *(undefined4 *)(lVar12 + uVar15 * 0x40 + 0x30));
            }
            else if (uVar7 == 5) {
              FUN_00c2f578(local_a8,0x40," [[%s]]",*puVar11);
            }
            else if (uVar7 == 4) {
              FUN_00c2f578(local_a8,0x40," [[sampler(%d)]]",
                           *(undefined4 *)(lVar12 + uVar15 * 0x40 + 0x30));
            }
          }
          else {
            FUN_00c2f578(local_a8,0x40," [[buffer(%d)]]");
          }
        }
        if ((param_5 & 1U) != 0) {
          CodeStringStream::writeLine((char *)param_2,&DAT_005097bc);
        }
        uVar7 = *puVar2;
        if (uVar7 == 1) {
          lVar12 = lVar12 + uVar15 * 0x40;
          lVar13 = (long)puVar2 + 0x19;
          if ((*(byte *)puVar17 & 1) != 0) {
            lVar13 = *plVar10;
          }
          CodeStringStream::writeLine
                    ((char *)param_2,"threadgroup %s %s[%u]",lVar13,*(undefined8 *)(lVar12 + 8),
                     (ulong)*(uint *)(lVar12 + 0x34));
        }
        else if (uVar7 == 0) {
          lVar13 = (long)puVar2 + 0x19;
          if ((*(byte *)puVar17 & 1) != 0) {
            lVar13 = *plVar10;
          }
          CodeStringStream::writeLine
                    ((char *)param_2,"threadgroup %s %s",lVar13,
                     *(undefined8 *)(lVar12 + uVar15 * 0x40 + 8));
        }
        else {
          lVar3 = lVar12 + uVar15 * 0x40;
          piVar14 = *(int **)(lVar3 + 0x10);
          if (((piVar14 == (int *)0x0) || (*piVar14 != 7)) || (piVar14[4] != 6)) {
            pcVar5 = "SysVar_";
            if (uVar7 != 5) {
              pcVar5 = "";
            }
            CodeStringStream::writeLine
                      ((char *)param_2,"%s %s%s%s",lVar13,pcVar5,*(undefined8 *)(lVar3 + 8),local_a8
                      );
          }
          else {
            pcVar5 = "const ";
            if (*(char *)(piVar14 + 5) != '\0') {
              pcVar5 = "";
            }
            pcVar6 = "METAL_BUFFER_";
            if (*(char *)(piVar14 + 5) != '\0') {
              pcVar6 = "METAL_RWBUFFER_";
            }
            CodeStringStream::writeLine
                      ((char *)param_2,"%sdevice %s* %s%s%s",pcVar5,lVar13,pcVar6,
                       *(undefined8 *)(lVar12 + uVar15 * 0x40 + 8),local_a8);
          }
        }
        param_5 = true;
      }
      lVar12 = *(long *)param_3;
      bVar9 = uVar16 < (ulong)(*(long *)(param_3 + 8) - lVar12 >> 6);
      uVar15 = uVar16;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (bVar9);
  }
  if (*(int *)(param_1 + 0x14) == 2) {
    if ((param_5 & 1U) != 0) {
      CodeStringStream::writeLine((char *)param_2,&DAT_005097bc);
    }
    CodeStringStream::writeLine((char *)param_2,"uint %s [[threads_per_simdgroup]]",s_metalSysVars);
    CodeStringStream::writeLine
              ((char *)param_2,", uint %s [[thread_index_in_simdgroup]]",
               PTR_s_SysVar_subGroupInvocation_01046320);
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


