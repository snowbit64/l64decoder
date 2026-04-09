// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_info
// Entry Point: 00db0f88
// Size: 1236 bytes
// Signature: undefined png_read_info(void)


void png_read_info(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    png_read_sig(param_1,param_2);
    uVar1 = png_read_chunk_header(param_1);
    iVar2 = *(int *)(param_1 + 0x250);
    while (iVar2 != 0x49444154) {
      if ((*(uint *)(param_1 + 0x164) >> 2 & 1) != 0) {
        *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x2008;
      }
      if (iVar2 == 0x49454e44) {
        png_handle_IEND(param_1,param_2,uVar1);
      }
      else if (iVar2 == 0x49484452) {
        png_handle_IHDR(param_1,param_2,uVar1);
      }
      else {
        iVar3 = png_chunk_unknown_handling(param_1,iVar2);
        if (iVar3 == 0) {
          if (iVar2 < 0x7043414c) {
            if (iVar2 < 0x67414d41) {
              if (iVar2 < 0x6348524d) {
                if (iVar2 == 0x504c5445) {
                  png_handle_PLTE(param_1,param_2,uVar1);
                }
                else if (iVar2 == 0x624b4744) {
                  png_handle_bKGD(param_1,param_2,uVar1);
                }
                else {
LAB_00db1424:
                  png_handle_unknown(param_1,param_2,uVar1,0);
                }
              }
              else if (iVar2 == 0x6348524d) {
                png_handle_cHRM(param_1,param_2,uVar1);
              }
              else {
                if (iVar2 != 0x65584966) goto LAB_00db1424;
                png_handle_eXIf(param_1,param_2,uVar1);
              }
            }
            else if (iVar2 < 0x69434350) {
              if (iVar2 == 0x67414d41) {
                png_handle_gAMA(param_1,param_2,uVar1);
              }
              else {
                if (iVar2 != 0x68495354) goto LAB_00db1424;
                png_handle_hIST(param_1,param_2,uVar1);
              }
            }
            else if (iVar2 == 0x69434350) {
              png_handle_iCCP(param_1,param_2,uVar1);
            }
            else if (iVar2 == 0x69545874) {
              png_handle_iTXt(param_1,param_2,uVar1);
            }
            else {
              if (iVar2 != 0x6f464673) goto LAB_00db1424;
              png_handle_oFFs(param_1,param_2,uVar1);
            }
          }
          else if (iVar2 < 0x73524742) {
            if (iVar2 < 0x73424954) {
              if (iVar2 == 0x7043414c) {
                png_handle_pCAL(param_1,param_2,uVar1);
              }
              else {
                if (iVar2 != 0x70485973) goto LAB_00db1424;
                png_handle_pHYs(param_1,param_2,uVar1);
              }
            }
            else if (iVar2 == 0x73424954) {
              png_handle_sBIT(param_1,param_2,uVar1);
            }
            else if (iVar2 == 0x7343414c) {
              png_handle_sCAL(param_1,param_2,uVar1);
            }
            else {
              if (iVar2 != 0x73504c54) goto LAB_00db1424;
              png_handle_sPLT(param_1,param_2,uVar1);
            }
          }
          else if (iVar2 < 0x74494d45) {
            if (iVar2 == 0x73524742) {
              png_handle_sRGB(param_1,param_2,uVar1);
            }
            else {
              if (iVar2 != 0x74455874) goto LAB_00db1424;
              png_handle_tEXt(param_1,param_2,uVar1);
            }
          }
          else if (iVar2 == 0x74494d45) {
            png_handle_tIME(param_1,param_2,uVar1);
          }
          else if (iVar2 == 0x74524e53) {
            png_handle_tRNS(param_1,param_2,uVar1);
          }
          else {
            if (iVar2 != 0x7a545874) goto LAB_00db1424;
            png_handle_zTXt(param_1,param_2,uVar1);
          }
        }
        else {
          png_handle_unknown(param_1,param_2,uVar1,iVar3);
          if (iVar2 == 0x504c5445) {
            *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 2;
          }
        }
      }
      uVar1 = png_read_chunk_header(param_1);
      iVar2 = *(int *)(param_1 + 0x250);
    }
    uVar4 = *(uint *)(param_1 + 0x164);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"Missing IHDR before IDAT");
    }
    if ((*(char *)(param_1 + 0x29f) == '\x03') && ((uVar4 >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"Missing PLTE before IDAT");
    }
    if ((uVar4 >> 3 & 1) != 0) {
      png_chunk_benign_error(param_1,"Too many IDATs found");
      uVar4 = *(uint *)(param_1 + 0x164);
    }
    *(uint *)(param_1 + 0x164) = uVar4 | 4;
    iVar2 = png_chunk_unknown_handling(param_1,0x49444154);
    if (iVar2 != 0) {
      png_handle_unknown(param_1,param_2,uVar1,iVar2);
      uVar1 = 0;
    }
    *(undefined4 *)(param_1 + 0x280) = uVar1;
  }
  return;
}


