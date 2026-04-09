// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexAttributeIndex
// Entry Point: 00c2a598
// Size: 328 bytes
// Signature: undefined __cdecl getVertexAttributeIndex(char * param_1)


/* IR_HllConvertUtil::getVertexAttributeIndex(char const*) */

int IR_HllConvertUtil::getVertexAttributeIndex(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp("GS_ATTR_POSITION",param_1);
  if (iVar1 != 0) {
    iVar1 = strcmp("GS_ATTR_BLENDWEIGHT",param_1);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = strcmp("GS_ATTR_NORMAL",param_1);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      else {
        iVar1 = strcmp("GS_ATTR_COLOR0",param_1);
        if (iVar1 == 0) {
          iVar1 = 3;
        }
        else {
          iVar1 = strcmp("GS_ATTR_BLENDINDICES",param_1);
          if (iVar1 == 0) {
            iVar1 = 4;
          }
          else {
            iVar1 = strcmp("GS_ATTR_TEXCOORD0",param_1);
            if (iVar1 == 0) {
              iVar1 = 5;
            }
            else {
              iVar1 = strcmp("GS_ATTR_TEXCOORD1",param_1);
              if (iVar1 == 0) {
                iVar1 = 6;
              }
              else {
                iVar1 = strcmp("GS_ATTR_TEXCOORD2",param_1);
                if (iVar1 == 0) {
                  iVar1 = 7;
                }
                else {
                  iVar1 = strcmp("GS_ATTR_TEXCOORD3",param_1);
                  if (iVar1 == 0) {
                    iVar1 = 8;
                  }
                  else {
                    iVar1 = strcmp("GS_ATTR_TANGENT",param_1);
                    if (iVar1 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar2 = strcmp("GS_ATTR_SBOFFSET",param_1);
                      iVar1 = 10;
                      if (iVar2 != 0) {
                        iVar1 = 0xb;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


