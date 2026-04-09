// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTypeIndex
// Entry Point: 008adcac
// Size: 256 bytes
// Signature: undefined __thiscall getTypeIndex(DistortionSettings * this, char * param_1)


/* DistortionSettings::getTypeIndex(char const*) const */

ulong __thiscall DistortionSettings::getTypeIndex(DistortionSettings *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar1 = strcmp(param_1,s_typeNames);
    uVar3 = (ulong)uVar1;
    if (uVar1 != 0) {
      iVar2 = strcmp(param_1,PTR_s_ARCTAN_0103ef50);
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      else {
        iVar2 = strcmp(param_1,PTR_s_HARDCLIP_0103ef58);
        if (iVar2 == 0) {
          uVar3 = 2;
        }
        else {
          iVar2 = strcmp(param_1,PTR_s_FUZZYMOUTH_0103ef60);
          if (iVar2 == 0) {
            uVar3 = 3;
          }
          else {
            iVar2 = strcmp(param_1,PTR_s_INYOURFUZZ_0103ef68);
            if (iVar2 == 0) {
              uVar3 = 4;
            }
            else {
              iVar2 = strcmp(param_1,PTR_s_FUZZYBOOTS_0103ef70);
              if (iVar2 == 0) {
                uVar3 = 5;
              }
              else {
                iVar2 = strcmp(param_1,PTR_s_SMOOTH_0103ef78);
                if (iVar2 == 0) {
                  uVar3 = 6;
                }
                else {
                  iVar2 = strcmp(param_1,PTR_s_CUBIC_FULL_0103ef80);
                  if (iVar2 == 0) {
                    uVar3 = 7;
                  }
                  else {
                    iVar2 = strcmp(param_1,PTR_s_CUBIC_DRIVE_0103ef88);
                    uVar3 = (ulong)(iVar2 == 0) << 3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}


