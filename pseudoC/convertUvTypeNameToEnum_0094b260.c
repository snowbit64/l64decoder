// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertUvTypeNameToEnum
// Entry Point: 0094b260
// Size: 208 bytes
// Signature: undefined __cdecl convertUvTypeNameToEnum(char * param_1, UV_TYPE * param_2)


/* CustomShader::convertUvTypeNameToEnum(char const*, CustomShader::UV_TYPE&) */

undefined8 CustomShader::convertUvTypeNameToEnum(char *param_1,UV_TYPE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcasecmp(param_1,"uv0");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcasecmp(param_1,"uv1");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcasecmp(param_1,"uv2");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcasecmp(param_1,"uv3");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcasecmp(param_1,"worldspace");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcasecmp(param_1,"custom");
            if (iVar1 != 0) {
              return 0;
            }
            uVar2 = 5;
          }
        }
      }
    }
  }
  *(undefined4 *)param_2 = uVar2;
  return 1;
}


