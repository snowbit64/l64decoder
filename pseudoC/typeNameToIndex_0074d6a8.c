// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: typeNameToIndex
// Entry Point: 0074d6a8
// Size: 404 bytes
// Signature: undefined __thiscall typeNameToIndex(DebugMarkerManager * this, char * param_1)


/* DebugMarkerManager::typeNameToIndex(char const*) */

int __thiscall DebugMarkerManager::typeNameToIndex(DebugMarkerManager *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(*(char **)(this + 0x98),param_1);
  if (iVar1 != 0) {
    iVar1 = strcmp(*(char **)(this + 0xa0),param_1);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(this + 0xa8),param_1);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      else {
        iVar1 = strcmp(*(char **)(this + 0xb0),param_1);
        if (iVar1 == 0) {
          iVar1 = 3;
        }
        else {
          iVar1 = strcmp(*(char **)(this + 0xb8),param_1);
          if (iVar1 == 0) {
            iVar1 = 4;
          }
          else {
            iVar1 = strcmp(*(char **)(this + 0xc0),param_1);
            if (iVar1 == 0) {
              iVar1 = 5;
            }
            else {
              iVar1 = strcmp(*(char **)(this + 200),param_1);
              if (iVar1 == 0) {
                iVar1 = 6;
              }
              else {
                iVar1 = strcmp(*(char **)(this + 0xd0),param_1);
                if (iVar1 == 0) {
                  iVar1 = 7;
                }
                else {
                  iVar1 = strcmp(*(char **)(this + 0xd8),param_1);
                  if (iVar1 == 0) {
                    iVar1 = 8;
                  }
                  else {
                    iVar1 = strcmp(*(char **)(this + 0xe0),param_1);
                    if (iVar1 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar1 = strcmp(*(char **)(this + 0xe8),param_1);
                      if (iVar1 == 0) {
                        iVar1 = 10;
                      }
                      else {
                        iVar1 = strcmp(*(char **)(this + 0xf0),param_1);
                        if (iVar1 == 0) {
                          iVar1 = 0xb;
                        }
                        else {
                          iVar1 = strcmp(*(char **)(this + 0xf8),param_1);
                          if (iVar1 == 0) {
                            iVar1 = 0xc;
                          }
                          else {
                            iVar1 = strcmp(*(char **)(this + 0x100),param_1);
                            if (iVar1 == 0) {
                              iVar1 = 0xd;
                            }
                            else {
                              iVar1 = strcmp(*(char **)(this + 0x108),param_1);
                              if (iVar1 == 0) {
                                iVar1 = 0xe;
                              }
                              else {
                                iVar2 = strcmp(*(char **)(this + 0x110),param_1);
                                iVar1 = 0xf;
                                if (iVar2 != 0) {
                                  iVar1 = 0;
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
          }
        }
      }
    }
  }
  return iVar1;
}


