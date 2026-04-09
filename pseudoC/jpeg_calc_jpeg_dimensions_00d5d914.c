// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_calc_jpeg_dimensions
// Entry Point: 00d5d914
// Size: 968 bytes
// Signature: undefined jpeg_calc_jpeg_dimensions(void)


void jpeg_calc_jpeg_dimensions(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  if ((*(char *)((long)param_1 + 0x33) != '\0') || (*(char *)((long)param_1 + 0x37) != '\0')) {
    *(undefined8 *)(*param_1 + 0x28) = 0xffdc0000002a;
    (**(code **)*param_1)(param_1);
  }
  uVar1 = *(uint *)(param_1 + 9);
  iVar2 = *(int *)((long)param_1 + 0x1cc);
  lVar6 = (long)iVar2;
  uVar3 = iVar2 * *(int *)((long)param_1 + 0x4c);
  if (uVar1 < uVar3) {
    if (uVar1 * 2 < uVar3) {
      if (uVar1 * 3 < uVar3) {
        if (uVar1 * 4 < uVar3) {
          if (uVar1 * 5 < uVar3) {
            if (uVar1 * 6 < uVar3) {
              if (uVar1 * 7 < uVar3) {
                if (uVar1 * 8 < uVar3) {
                  if (uVar1 * 9 < uVar3) {
                    if (uVar1 * 10 < uVar3) {
                      if (uVar1 * 0xb < uVar3) {
                        if (uVar1 * 0xc < uVar3) {
                          if (uVar1 * 0xd < uVar3) {
                            if (uVar1 * 0xe < uVar3) {
                              if (uVar1 * 0xf < uVar3) {
                                uVar8 = 0x10;
                                uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,0x10);
                                uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                                *(undefined4 *)(param_1 + 10) = uVar4;
                                lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                                uVar5 = 0x10;
                              }
                              else {
                                uVar8 = 0xf;
                                uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,0xf);
                                uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                                *(undefined4 *)(param_1 + 10) = uVar4;
                                lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                                uVar5 = 0xf;
                              }
                            }
                            else {
                              uVar8 = 0xe;
                              uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,0xe);
                              uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                              *(undefined4 *)(param_1 + 10) = uVar4;
                              lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                              uVar5 = 0xe;
                            }
                          }
                          else {
                            uVar8 = 0xd;
                            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,0xd);
                            uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                            *(undefined4 *)(param_1 + 10) = uVar4;
                            lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                            uVar5 = 0xd;
                          }
                        }
                        else {
                          uVar8 = 0xc;
                          uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,0xc);
                          uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                          *(undefined4 *)(param_1 + 10) = uVar4;
                          lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                          uVar5 = 0xc;
                        }
                      }
                      else {
                        uVar8 = 0xb;
                        uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,0xb);
                        uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                        *(undefined4 *)(param_1 + 10) = uVar4;
                        lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                        uVar5 = 0xb;
                      }
                    }
                    else {
                      uVar8 = 10;
                      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,10);
                      uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                      *(undefined4 *)(param_1 + 10) = uVar4;
                      lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                      uVar5 = 10;
                    }
                  }
                  else {
                    uVar8 = 9;
                    uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,9);
                    uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                    *(undefined4 *)(param_1 + 10) = uVar4;
                    lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                    uVar5 = 9;
                  }
                }
                else {
                  uVar8 = 8;
                  uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,8);
                  uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                  *(undefined4 *)(param_1 + 10) = uVar4;
                  lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                  uVar5 = 8;
                }
              }
              else {
                uVar8 = 7;
                uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,7);
                uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
                *(undefined4 *)(param_1 + 10) = uVar4;
                lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
                uVar5 = 7;
              }
            }
            else {
              uVar8 = 6;
              uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,6);
              uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
              *(undefined4 *)(param_1 + 10) = uVar4;
              lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
              uVar5 = 6;
            }
          }
          else {
            uVar8 = 5;
            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,5);
            uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
            *(undefined4 *)(param_1 + 10) = uVar4;
            lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
            uVar5 = 5;
          }
        }
        else {
          uVar8 = 4;
          uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,4);
          uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
          *(undefined4 *)(param_1 + 10) = uVar4;
          lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
          uVar5 = 4;
        }
      }
      else {
        uVar8 = 3;
        uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,3);
        uVar7 = (ulong)*(uint *)((long)param_1 + 0x34);
        *(undefined4 *)(param_1 + 10) = uVar4;
        lVar6 = (long)*(int *)((long)param_1 + 0x1cc);
        uVar5 = 3;
      }
      uVar4 = jdiv_round_up(lVar6 * uVar7,uVar5);
      *(undefined4 *)((long)param_1 + 0x54) = uVar4;
      *(undefined4 *)(param_1 + 0x2b) = uVar8;
      *(undefined4 *)((long)param_1 + 0x15c) = uVar8;
      return;
    }
    uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 6) * lVar6,2);
    *(undefined4 *)(param_1 + 10) = uVar4;
    uVar4 = jdiv_round_up((long)*(int *)((long)param_1 + 0x1cc) *
                          (ulong)*(uint *)((long)param_1 + 0x34),2);
    *(undefined4 *)((long)param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x2b) = 2;
    *(undefined4 *)((long)param_1 + 0x15c) = 2;
    return;
  }
  *(int *)(param_1 + 10) = *(int *)(param_1 + 6) * iVar2;
  *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x34) * iVar2;
  *(undefined4 *)(param_1 + 0x2b) = 1;
  *(undefined4 *)((long)param_1 + 0x15c) = 1;
  return;
}


