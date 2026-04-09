// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_bKGD
// Entry Point: 00dbdfd8
// Size: 600 bytes
// Signature: undefined png_handle_bKGD(void)


void png_handle_bKGD(long param_1,long param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  byte local_50 [2];
  ulong local_4e;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar8 = *(uint *)(param_1 + 0x164);
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if (((uVar8 >> 2 & 1) == 0) &&
     ((bVar2 = *(byte *)(param_1 + 0x29f), bVar2 != 3 || ((uVar8 >> 1 & 1) != 0)))) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) >> 5 & 1) == 0)) {
      iVar4 = 2;
      if ((bVar2 & 2) != 0) {
        iVar4 = 6;
      }
      if (bVar2 == 3) {
        iVar4 = 1;
      }
      if (iVar4 == param_3) {
        png_read_data(param_1,&local_40,param_3);
        png_calculate_crc(param_1,&local_40,param_3);
        iVar4 = png_crc_finish(param_1,0);
        if (iVar4 != 0) goto LAB_00dbe038;
        if (*(byte *)(param_1 + 0x29f) == 3) {
          local_50[0] = local_40;
          if ((param_2 == 0) || (uVar6 = *(ushort *)(param_2 + 0x20), uVar6 == 0)) {
            local_4e = 0;
          }
          else {
            if (uVar6 < local_40 || uVar6 == local_40) {
              pcVar5 = "invalid index";
              goto LAB_00dbe030;
            }
            pbVar1 = (byte *)(*(long *)(param_1 + 0x288) + (ulong)local_40 * 3);
            local_4e._0_4_ = (uint)CONCAT12(pbVar1[1],(ushort)*pbVar1);
            local_4e = (ulong)CONCAT14(pbVar1[2],(uint)local_4e);
          }
        }
        else {
          uVar8 = (uint)*(byte *)(param_1 + 0x2a0);
          if ((*(byte *)(param_1 + 0x29f) >> 1 & 1) == 0) {
            uVar7 = (uint)local_40;
            if ((uVar8 < 9) &&
               ((local_40 != 0 || (uVar7 = (uint)(local_3f >> (ulong)(uVar8 & 0x1f)), uVar7 != 0))))
            {
              pcVar5 = "invalid gray level";
              goto LAB_00dbe030;
            }
            uVar6 = (ushort)local_3f | (ushort)(uVar7 << 8);
            local_50[0] = 0;
            local_4e = CONCAT26(uVar6,CONCAT24(uVar6,CONCAT22(uVar6,uVar6)));
          }
          else {
            if (uVar8 < 9) {
              if (((local_40 != 0) || (local_3e != 0)) || (local_3c != 0)) {
                pcVar5 = "invalid color";
                goto LAB_00dbe030;
              }
              uVar8 = 0;
              uVar7 = 0;
              local_40 = 0;
            }
            else {
              uVar7 = (uint)local_3e;
              uVar8 = (uint)local_3c;
            }
            local_50[0] = 0;
            local_4e._0_4_ =
                 CONCAT22((ushort)local_3d | (ushort)(uVar7 << 8),CONCAT11(local_40,local_3f));
            local_4e = (ulong)CONCAT24((ushort)local_3b | (ushort)(uVar8 << 8),(uint)local_4e);
          }
        }
        png_set_bKGD(param_1,param_2,local_50);
        goto LAB_00dbe038;
      }
      png_crc_finish(param_1,param_3);
      pcVar5 = "invalid";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar5 = "duplicate";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of place";
  }
LAB_00dbe030:
  png_chunk_benign_error(param_1,pcVar5);
LAB_00dbe038:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


