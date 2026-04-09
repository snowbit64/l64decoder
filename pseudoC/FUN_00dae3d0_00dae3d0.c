// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dae3d0
// Entry Point: 00dae3d0
// Size: 792 bytes
// Signature: undefined FUN_00dae3d0(void)


undefined8 FUN_00dae3d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  
  iVar5 = *param_2;
  iVar6 = param_2[1] + iVar5 + param_2[2];
  if (iVar6 != 0) {
    if (iVar5 != 0) {
      dVar9 = (double)(long)(((double)iVar5 * 100000.0) / (double)iVar6 + 0.5);
      if (2147483647.0 < dVar9 || dVar9 < -2147483648.0) {
        return 1;
      }
      iVar5 = (int)dVar9;
    }
    *param_1 = iVar5;
    iVar5 = param_2[1];
    if (iVar5 != 0) {
      dVar9 = (double)(long)(((double)iVar5 * 100000.0) / (double)iVar6 + 0.5);
      if (2147483647.0 < dVar9 || dVar9 < -2147483648.0) {
        return 1;
      }
      iVar5 = (int)dVar9;
    }
    param_1[1] = iVar5;
    iVar7 = param_2[3];
    iVar5 = param_2[4] + iVar7 + param_2[5];
    if (iVar5 != 0) {
      iVar1 = *param_2;
      iVar3 = param_2[1];
      if (iVar7 != 0) {
        dVar9 = (double)(long)(((double)iVar7 * 100000.0) / (double)iVar5 + 0.5);
        if (2147483647.0 < dVar9 || dVar9 < -2147483648.0) {
          return 1;
        }
        iVar7 = (int)dVar9;
      }
      param_1[2] = iVar7;
      iVar7 = param_2[4];
      if (iVar7 != 0) {
        dVar9 = (double)(long)(((double)iVar7 * 100000.0) / (double)iVar5 + 0.5);
        if (2147483647.0 < dVar9 || dVar9 < -2147483648.0) {
          return 1;
        }
        iVar7 = (int)dVar9;
      }
      param_1[3] = iVar7;
      iVar8 = param_2[6];
      iVar7 = param_2[7] + iVar8 + param_2[8];
      if (iVar7 != 0) {
        iVar2 = param_2[3];
        iVar4 = param_2[4];
        if (iVar8 != 0) {
          dVar9 = (double)(long)(((double)iVar8 * 100000.0) / (double)iVar7 + 0.5);
          if (2147483647.0 < dVar9 || dVar9 < -2147483648.0) {
            return 1;
          }
          iVar8 = (int)dVar9;
        }
        param_1[4] = iVar8;
        iVar8 = param_2[7];
        if (iVar8 != 0) {
          dVar9 = (double)(long)(((double)iVar8 * 100000.0) / (double)iVar7 + 0.5);
          if (2147483647.0 < dVar9 || dVar9 < -2147483648.0) {
            return 1;
          }
          iVar8 = (int)dVar9;
        }
        param_1[5] = iVar8;
        iVar7 = iVar5 + iVar6 + iVar7;
        if (iVar7 != 0) {
          iVar5 = param_2[7];
          dVar9 = (double)iVar7;
          iVar6 = iVar2 + iVar1 + param_2[6];
          if (iVar6 != 0) {
            dVar10 = (double)(long)(((double)iVar6 * 100000.0) / dVar9 + 0.5);
            if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) {
              return 1;
            }
            iVar6 = (int)dVar10;
          }
          param_1[6] = iVar6;
          iVar5 = iVar4 + iVar3 + iVar5;
          if (iVar5 == 0) {
            iVar6 = 0;
          }
          else {
            dVar9 = (double)(long)(((double)iVar5 * 100000.0) / dVar9 + 0.5);
            if (2147483647.0 < dVar9 || dVar9 < -2147483648.0) {
              return 1;
            }
            iVar6 = (int)dVar9;
          }
          param_1[7] = iVar6;
          return 0;
        }
      }
    }
  }
  return 1;
}


