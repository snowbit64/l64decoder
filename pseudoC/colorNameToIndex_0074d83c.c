// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: colorNameToIndex
// Entry Point: 0074d83c
// Size: 404 bytes
// Signature: undefined __thiscall colorNameToIndex(DebugMarkerManager * this, char * param_1)


/* DebugMarkerManager::colorNameToIndex(char const*) */

int __thiscall DebugMarkerManager::colorNameToIndex(DebugMarkerManager *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(*(char **)(this + 0x18),param_1);
  if (iVar1 != 0) {
    iVar1 = strcmp(*(char **)(this + 0x20),param_1);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(this + 0x28),param_1);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      else {
        iVar1 = strcmp(*(char **)(this + 0x30),param_1);
        if (iVar1 == 0) {
          iVar1 = 3;
        }
        else {
          iVar1 = strcmp(*(char **)(this + 0x38),param_1);
          if (iVar1 == 0) {
            iVar1 = 4;
          }
          else {
            iVar1 = strcmp(*(char **)(this + 0x40),param_1);
            if (iVar1 == 0) {
              iVar1 = 5;
            }
            else {
              iVar1 = strcmp(*(char **)(this + 0x48),param_1);
              if (iVar1 == 0) {
                iVar1 = 6;
              }
              else {
                iVar1 = strcmp(*(char **)(this + 0x50),param_1);
                if (iVar1 == 0) {
                  iVar1 = 7;
                }
                else {
                  iVar1 = strcmp(*(char **)(this + 0x58),param_1);
                  if (iVar1 == 0) {
                    iVar1 = 8;
                  }
                  else {
                    iVar1 = strcmp(*(char **)(this + 0x60),param_1);
                    if (iVar1 == 0) {
                      iVar1 = 9;
                    }
                    else {
                      iVar1 = strcmp(*(char **)(this + 0x68),param_1);
                      if (iVar1 == 0) {
                        iVar1 = 10;
                      }
                      else {
                        iVar1 = strcmp(*(char **)(this + 0x70),param_1);
                        if (iVar1 == 0) {
                          iVar1 = 0xb;
                        }
                        else {
                          iVar1 = strcmp(*(char **)(this + 0x78),param_1);
                          if (iVar1 == 0) {
                            iVar1 = 0xc;
                          }
                          else {
                            iVar1 = strcmp(*(char **)(this + 0x80),param_1);
                            if (iVar1 == 0) {
                              iVar1 = 0xd;
                            }
                            else {
                              iVar1 = strcmp(*(char **)(this + 0x88),param_1);
                              if (iVar1 == 0) {
                                iVar1 = 0xe;
                              }
                              else {
                                iVar2 = strcmp(*(char **)(this + 0x90),param_1);
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


