// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBestLanguage
// Entry Point: 006c9b0c
// Size: 456 bytes
// Signature: undefined __thiscall getBestLanguage(Application * this, LANGUAGE_TYPE param_1)


/* Application::getBestLanguage(LanguageUtil::LANGUAGE_TYPE) */

uint __thiscall Application::getBestLanguage(Application *this,LANGUAGE_TYPE param_1)

{
  if (((0x17 < param_1) || (this[(ulong)param_1 + 0x1d0] == (Application)0x0)) &&
     (param_1 = LanguageUtil::getSystemLanguage(), this[(ulong)param_1 + 0x1d0] == (Application)0x0)
     ) {
    if (this[0x1d0] == (Application)0x0) {
      if (this[0x1d1] == (Application)0x0) {
        if (this[0x1d2] == (Application)0x0) {
          if (this[0x1d3] == (Application)0x0) {
            if (this[0x1d4] == (Application)0x0) {
              if (this[0x1d5] == (Application)0x0) {
                if (this[0x1d6] == (Application)0x0) {
                  if (this[0x1d7] == (Application)0x0) {
                    if (this[0x1d8] == (Application)0x0) {
                      if (this[0x1d9] == (Application)0x0) {
                        if (this[0x1da] == (Application)0x0) {
                          if (this[0x1db] == (Application)0x0) {
                            if (this[0x1dc] == (Application)0x0) {
                              if (this[0x1dd] == (Application)0x0) {
                                if (this[0x1de] == (Application)0x0) {
                                  if (this[0x1df] == (Application)0x0) {
                                    if (this[0x1e0] == (Application)0x0) {
                                      if (this[0x1e1] == (Application)0x0) {
                                        if (this[0x1e2] == (Application)0x0) {
                                          if (this[0x1e3] == (Application)0x0) {
                                            if (this[0x1e4] == (Application)0x0) {
                                              if (this[0x1e5] == (Application)0x0) {
                                                if (this[0x1e6] == (Application)0x0) {
                                                  param_1 = 0;
                                                  if (this[0x1e7] != (Application)0x0) {
                                                    param_1 = 0x17;
                                                  }
                                                }
                                                else {
                                                  param_1 = 0x16;
                                                }
                                              }
                                              else {
                                                param_1 = 0x15;
                                              }
                                            }
                                            else {
                                              param_1 = 0x14;
                                            }
                                          }
                                          else {
                                            param_1 = 0x13;
                                          }
                                        }
                                        else {
                                          param_1 = 0x12;
                                        }
                                      }
                                      else {
                                        param_1 = 0x11;
                                      }
                                    }
                                    else {
                                      param_1 = 0x10;
                                    }
                                  }
                                  else {
                                    param_1 = 0xf;
                                  }
                                }
                                else {
                                  param_1 = 0xe;
                                }
                              }
                              else {
                                param_1 = 0xd;
                              }
                            }
                            else {
                              param_1 = 0xc;
                            }
                          }
                          else {
                            param_1 = 0xb;
                          }
                        }
                        else {
                          param_1 = 10;
                        }
                      }
                      else {
                        param_1 = 9;
                      }
                    }
                    else {
                      param_1 = 8;
                    }
                  }
                  else {
                    param_1 = 7;
                  }
                }
                else {
                  param_1 = 6;
                }
              }
              else {
                param_1 = 5;
              }
            }
            else {
              param_1 = 4;
            }
          }
          else {
            param_1 = 3;
          }
        }
        else {
          param_1 = 2;
        }
      }
      else {
        param_1 = 1;
      }
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}


