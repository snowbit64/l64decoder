// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSystemVariableInfo
// Entry Point: 00c2a6e0
// Size: 460 bytes
// Signature: undefined __cdecl getSystemVariableInfo(ShaderLanguage * param_1, char * param_2)


/* IR_HllConvertUtil::getSystemVariableInfo(ShaderLanguage const&, char const*) */

undefined ** IR_HllConvertUtil::getSystemVariableInfo(ShaderLanguage *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  long lVar4;
  
  if (((*param_2 == 'G') && (param_2[1] == 'S')) && (param_2[2] == '_')) {
    iVar2 = strcmp(param_2,"GS_OUT_POSITION");
    if (iVar2 == 0) {
      lVar4 = 0;
    }
    else {
      iVar2 = strcmp(param_2,"GS_SYSTEM_VERTEXID");
      if (iVar2 == 0) {
        lVar4 = 1;
      }
      else {
        iVar2 = strcmp(param_2,"GS_SYSTEM_INSTANCEID");
        if (iVar2 == 0) {
          lVar4 = 2;
        }
        else {
          iVar2 = strcmp(param_2,"GS_SYSTEM_PRIMITIVEID");
          if (iVar2 == 0) {
            lVar4 = 3;
          }
          else {
            iVar2 = strcmp(param_2,"GS_SYSTEM_IS_FRONT_FACE");
            if (iVar2 == 0) {
              lVar4 = 4;
            }
            else {
              iVar2 = strcmp(param_2,"GS_SYSTEM_GROUP_ID");
              if (iVar2 == 0) {
                lVar4 = 5;
              }
              else {
                iVar2 = strcmp(param_2,"GS_SYSTEM_GROUP_THREAD_ID");
                if (iVar2 == 0) {
                  lVar4 = 6;
                }
                else {
                  iVar2 = strcmp(param_2,"GS_SYSTEM_GROUP_THREAD_INDEX");
                  if (iVar2 == 0) {
                    lVar4 = 7;
                  }
                  else {
                    iVar2 = strcmp(param_2,"GS_SYSTEM_THREAD_ID");
                    if (iVar2 == 0) {
                      lVar4 = 8;
                    }
                    else {
                      iVar2 = strcmp(param_2,"GS_SYSTEM_SHADING_RATE");
                      if (iVar2 != 0) goto LAB_00c2a890;
                      lVar4 = 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar1 = *param_1;
    if ((uVar1 < 7) && ((1 << (ulong)(uVar1 & 0x1f) & 0x46U) != 0)) {
      ppuVar3 = &PTR_s_SV_POSITION_01046328;
    }
    else if (uVar1 - 3 < 2) {
      ppuVar3 = &PTR_s_S_POSITION_01046468;
    }
    else if (uVar1 == 6) {
      ppuVar3 = &PTR_s_gl_FragCoord_010465a8;
    }
    else {
      if (uVar1 != 5) goto LAB_00c2a890;
      ppuVar3 = &PTR_s_position_010466e8;
    }
    ppuVar3 = ppuVar3 + lVar4 * 4;
  }
  else {
LAB_00c2a890:
    ppuVar3 = (undefined **)0x0;
  }
  return ppuVar3;
}


