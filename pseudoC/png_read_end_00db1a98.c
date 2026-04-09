// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_end
// Entry Point: 00db1a98
// Size: 1432 bytes
// Signature: undefined png_read_end(void)


void png_read_end(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 != 0) {
    iVar2 = png_chunk_unknown_handling(param_1,0x49444154);
    if (iVar2 == 0) {
      png_read_finish_IDAT(param_1);
      cVar1 = *(char *)(param_1 + 0x29f);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x29f);
    }
    if ((cVar1 == '\x03') && ((int)(uint)*(ushort *)(param_1 + 0x290) < *(int *)(param_1 + 0x294)))
    {
      png_benign_error(param_1,"Read palette index exceeding num_palette");
    }
    if (param_2 == 0) {
      do {
        uVar5 = png_read_chunk_header(param_1);
        iVar2 = *(int *)(param_1 + 0x250);
        if (iVar2 == 0x49444154) {
LAB_00db1fac:
          png_crc_finish(param_1,uVar5);
        }
        else {
          *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x2000;
          if (iVar2 == 0x49454e44) {
            png_handle_IEND(param_1,0);
          }
          else {
            if (iVar2 != 0x49484452) goto LAB_00db1fac;
            png_handle_IHDR(param_1,0);
          }
        }
      } while ((*(byte *)(param_1 + 0x164) >> 4 & 1) == 0);
    }
    else {
      do {
        iVar3 = png_read_chunk_header(param_1);
        iVar2 = *(int *)(param_1 + 0x250);
        if (iVar2 == 0x49444154) {
          iVar4 = png_chunk_unknown_handling(param_1,0x49444154);
          if (iVar4 == 0) {
LAB_00db1c2c:
            if (iVar2 < 0x7043414c) {
              if (iVar2 < 0x67414d41) {
                if (iVar2 < 0x624b4744) {
                  if (iVar2 == 0x49444154) {
                    if (((iVar3 != 0) && ((*(byte *)(param_1 + 0x168) >> 3 & 1) == 0)) ||
                       ((*(byte *)(param_1 + 0x165) >> 5 & 1) != 0)) {
                      png_benign_error(param_1,"..Too many IDATs found");
                    }
                    png_crc_finish(param_1,iVar3);
                  }
                  else {
                    if (iVar2 != 0x504c5445) {
LAB_00db1f84:
                      iVar4 = 0;
                      goto LAB_00db1bb4;
                    }
                    png_handle_PLTE(param_1,param_2,iVar3);
                  }
                }
                else if (iVar2 == 0x624b4744) {
                  png_handle_bKGD(param_1,param_2,iVar3);
                }
                else if (iVar2 == 0x6348524d) {
                  png_handle_cHRM(param_1,param_2,iVar3);
                }
                else {
                  if (iVar2 != 0x65584966) goto LAB_00db1f84;
                  png_handle_eXIf(param_1,param_2,iVar3);
                }
              }
              else if (iVar2 < 0x69434350) {
                if (iVar2 == 0x67414d41) {
                  png_handle_gAMA(param_1,param_2,iVar3);
                }
                else {
                  if (iVar2 != 0x68495354) goto LAB_00db1f84;
                  png_handle_hIST(param_1,param_2,iVar3);
                }
              }
              else if (iVar2 == 0x69434350) {
                png_handle_iCCP(param_1,param_2,iVar3);
              }
              else if (iVar2 == 0x69545874) {
                png_handle_iTXt(param_1,param_2,iVar3);
              }
              else {
                if (iVar2 != 0x6f464673) goto LAB_00db1f84;
                png_handle_oFFs(param_1,param_2,iVar3);
              }
            }
            else if (iVar2 < 0x73524742) {
              if (iVar2 < 0x73424954) {
                if (iVar2 == 0x7043414c) {
                  png_handle_pCAL(param_1,param_2,iVar3);
                }
                else {
                  if (iVar2 != 0x70485973) goto LAB_00db1f84;
                  png_handle_pHYs(param_1,param_2,iVar3);
                }
              }
              else if (iVar2 == 0x73424954) {
                png_handle_sBIT(param_1,param_2,iVar3);
              }
              else if (iVar2 == 0x7343414c) {
                png_handle_sCAL(param_1,param_2,iVar3);
              }
              else {
                if (iVar2 != 0x73504c54) goto LAB_00db1f84;
                png_handle_sPLT(param_1,param_2,iVar3);
              }
            }
            else if (iVar2 < 0x74494d45) {
              if (iVar2 == 0x73524742) {
                png_handle_sRGB(param_1,param_2,iVar3);
              }
              else {
                if (iVar2 != 0x74455874) goto LAB_00db1f84;
                png_handle_tEXt(param_1,param_2,iVar3);
              }
            }
            else if (iVar2 == 0x74494d45) {
              png_handle_tIME(param_1,param_2,iVar3);
            }
            else if (iVar2 == 0x74524e53) {
              png_handle_tRNS(param_1,param_2,iVar3);
            }
            else {
              if (iVar2 != 0x7a545874) goto LAB_00db1f84;
              png_handle_zTXt(param_1,param_2,iVar3);
            }
          }
          else {
            if (((iVar3 != 0) && ((*(byte *)(param_1 + 0x168) >> 3 & 1) == 0)) ||
               ((*(byte *)(param_1 + 0x165) >> 5 & 1) != 0)) {
              png_benign_error(param_1,".Too many IDATs found");
            }
LAB_00db1bb4:
            png_handle_unknown(param_1,param_2,iVar3,iVar4);
          }
        }
        else {
          *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x2000;
          if (iVar2 == 0x49484452) {
            png_handle_IHDR(param_1,param_2,iVar3);
          }
          else if (iVar2 == 0x49454e44) {
            png_handle_IEND(param_1,param_2,iVar3);
          }
          else {
            iVar4 = png_chunk_unknown_handling(param_1,iVar2);
            if (iVar4 == 0) goto LAB_00db1c2c;
            png_handle_unknown(param_1,param_2,iVar3,iVar4);
            if (iVar2 == 0x504c5445) {
              *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 2;
            }
          }
        }
      } while ((*(byte *)(param_1 + 0x164) >> 4 & 1) == 0);
    }
  }
  return;
}


