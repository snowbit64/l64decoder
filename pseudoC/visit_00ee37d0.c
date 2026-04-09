// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee37d0
// Size: 2240 bytes
// Signature: undefined __thiscall visit(BuiltinVisitor * this, AstExprCall * param_1)


/* Luau::Compile::BuiltinVisitor::visit(Luau::AstExprCall*) */

undefined8 __thiscall
Luau::Compile::BuiltinVisitor::visit(BuiltinVisitor *this,AstExprCall *param_1)

{
  int iVar1;
  char *__s1;
  char *__s1_00;
  char *__s2;
  ulong uVar2;
  long lVar3;
  long lVar4;
  AstExprCall *pAVar5;
  long *plVar6;
  undefined4 uVar7;
  char *__s2_00;
  long lVar8;
  undefined auVar9 [16];
  
  if (param_1[0x38] != (AstExprCall)0x0) {
    return 1;
  }
  auVar9 = getBuiltin(*(AstExpr **)(param_1 + 0x20),*(DenseHashMap **)(this + 0x10),
                      *(DenseHashMap **)(this + 0x18));
  __s1_00 = auVar9._8_8_;
  __s1 = auVar9._0_8_;
  if (((ulong)__s1 | (ulong)__s1_00) == 0) {
    return 1;
  }
  lVar8 = *(long *)(this + 0x20);
  if (__s1 == (char *)0x0) {
    if (__s1_00 == (char *)0x0) {
LAB_00ee3da8:
      __s2_00 = *(char **)(lVar8 + 0x18);
      if (__s2_00 == (char *)0x0) {
        return 1;
      }
      __s2 = *(char **)(lVar8 + 0x10);
      if (__s2 == (char *)0x0) {
        if (__s1 != (char *)0x0) {
          return 1;
        }
      }
      else {
        if (__s1 == (char *)0x0) {
          return 1;
        }
        iVar1 = strcmp(__s1,__s2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      if (__s1_00 == (char *)0x0) {
        return 1;
      }
      iVar1 = strcmp(__s1_00,__s2_00);
      if (iVar1 != 0) {
        return 1;
      }
      uVar7 = 0x36;
      goto LAB_00ee3fec;
    }
    iVar1 = strcmp(__s1_00,"assert");
    if (iVar1 == 0) {
      uVar7 = 1;
      goto LAB_00ee3fec;
    }
    iVar1 = strcmp(__s1_00,"type");
    if (iVar1 == 0) {
      uVar7 = 0x28;
      goto LAB_00ee3fec;
    }
    iVar1 = strcmp(__s1_00,"typeof");
    if (iVar1 == 0) {
      uVar7 = 0x2c;
      goto LAB_00ee3fec;
    }
    iVar1 = strcmp(__s1_00,"rawset");
    if (iVar1 == 0) {
      uVar7 = 0x31;
      goto LAB_00ee3fec;
    }
    iVar1 = strcmp(__s1_00,"rawget");
    if (iVar1 == 0) {
      uVar7 = 0x32;
      goto LAB_00ee3fec;
    }
    iVar1 = strcmp(__s1_00,"rawequal");
    if (iVar1 == 0) {
      uVar7 = 0x33;
      goto LAB_00ee3fec;
    }
    iVar1 = strcmp(__s1_00,"rawlen");
    if (iVar1 == 0) {
      uVar7 = 0x3a;
      goto LAB_00ee3fec;
    }
    iVar1 = strcmp(__s1_00,"unpack");
    if (iVar1 != 0) {
      iVar1 = strcmp(__s1_00,"select");
      if (iVar1 == 0) {
        if (*(long *)(param_1 + 0x30) != 2) {
          return 1;
        }
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 8) !=
            AstRtti<Luau::AstExprVarargs>::value) {
          return 1;
        }
        uVar7 = 0x39;
        goto LAB_00ee3fec;
      }
      if ((char)FFlag::LuauCompileBuiltinMT != '\0') {
        iVar1 = strcmp(__s1_00,"getmetatable");
        if (iVar1 == 0) {
          uVar7 = 0x3c;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"setmetatable");
        if (iVar1 == 0) {
          uVar7 = 0x3d;
          goto LAB_00ee3fec;
        }
      }
      goto LAB_00ee3da8;
    }
  }
  else {
    iVar1 = strcmp(__s1,"math");
    if (iVar1 == 0) {
      if (__s1_00 == (char *)0x0) goto LAB_00ee3da8;
      iVar1 = strcmp(__s1_00,"abs");
      if (iVar1 == 0) {
        uVar7 = 2;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"acos");
      if (iVar1 == 0) {
        uVar7 = 3;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"asin");
      if (iVar1 == 0) {
        uVar7 = 4;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"atan2");
      if (iVar1 == 0) {
        uVar7 = 5;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"atan");
      if (iVar1 == 0) {
        uVar7 = 6;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"ceil");
      if (iVar1 == 0) {
        uVar7 = 7;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"cosh");
      if (iVar1 == 0) {
        uVar7 = 8;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"cos");
      if (iVar1 == 0) {
        uVar7 = 9;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"deg");
      if (iVar1 == 0) {
        uVar7 = 10;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"exp");
      if (iVar1 == 0) {
        uVar7 = 0xb;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"floor");
      if (iVar1 == 0) {
        uVar7 = 0xc;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"fmod");
      if (iVar1 == 0) {
        uVar7 = 0xd;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"frexp");
      if (iVar1 == 0) {
        uVar7 = 0xe;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"ldexp");
      if (iVar1 == 0) {
        uVar7 = 0xf;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"log10");
      if (iVar1 == 0) {
        uVar7 = 0x10;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"log");
      if (iVar1 == 0) {
        uVar7 = 0x11;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"max");
      if (iVar1 == 0) {
        uVar7 = 0x12;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"min");
      if (iVar1 == 0) {
        uVar7 = 0x13;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"modf");
      if (iVar1 == 0) {
        uVar7 = 0x14;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"pow");
      if (iVar1 == 0) {
        uVar7 = 0x15;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"rad");
      if (iVar1 == 0) {
        uVar7 = 0x16;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"sinh");
      if (iVar1 == 0) {
        uVar7 = 0x17;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"sin");
      if (iVar1 == 0) {
        uVar7 = 0x18;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"sqrt");
      if (iVar1 == 0) {
        uVar7 = 0x19;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"tanh");
      if (iVar1 == 0) {
        uVar7 = 0x1a;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"tan");
      if (iVar1 == 0) {
        uVar7 = 0x1b;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"clamp");
      if (iVar1 == 0) {
        uVar7 = 0x2e;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"sign");
      if (iVar1 == 0) {
        uVar7 = 0x2f;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"round");
      if (iVar1 == 0) {
        uVar7 = 0x30;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1,"bit32");
      if (iVar1 == 0) goto LAB_00ee3858;
      iVar1 = strcmp(__s1,"string");
      if (iVar1 == 0) goto LAB_00ee3d44;
LAB_00ee3984:
      iVar1 = strcmp(__s1,"table");
      if ((iVar1 != 0) || (__s1_00 == (char *)0x0)) goto LAB_00ee3da8;
    }
    else {
      iVar1 = strcmp(__s1,"bit32");
      if ((iVar1 == 0) && (__s1_00 != (char *)0x0)) {
LAB_00ee3858:
        iVar1 = strcmp(__s1_00,"arshift");
        if (iVar1 == 0) {
          uVar7 = 0x1c;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"band");
        if (iVar1 == 0) {
          uVar7 = 0x1d;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"bnot");
        if (iVar1 == 0) {
          uVar7 = 0x1e;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"bor");
        if (iVar1 == 0) {
          uVar7 = 0x1f;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"bxor");
        if (iVar1 == 0) {
          uVar7 = 0x20;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"btest");
        if (iVar1 == 0) {
          uVar7 = 0x21;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"extract");
        if (iVar1 == 0) {
          uVar7 = 0x22;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"lrotate");
        if (iVar1 == 0) {
          uVar7 = 0x23;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"lshift");
        if (iVar1 == 0) {
          uVar7 = 0x24;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"replace");
        if (iVar1 == 0) {
          uVar7 = 0x25;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"rrotate");
        if (iVar1 == 0) {
          uVar7 = 0x26;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"rshift");
        if (iVar1 == 0) {
          uVar7 = 0x27;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"countlz");
        if (iVar1 == 0) {
          uVar7 = 0x37;
          goto LAB_00ee3fec;
        }
        iVar1 = strcmp(__s1_00,"countrz");
        if (iVar1 == 0) {
          uVar7 = 0x38;
          goto LAB_00ee3fec;
        }
      }
      iVar1 = strcmp(__s1,"string");
      if (iVar1 != 0) goto LAB_00ee3984;
      if (__s1_00 == (char *)0x0) goto LAB_00ee3da8;
LAB_00ee3d44:
      iVar1 = strcmp(__s1_00,"byte");
      if (iVar1 == 0) {
        uVar7 = 0x29;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"char");
      if (iVar1 == 0) {
        uVar7 = 0x2a;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"len");
      if (iVar1 == 0) {
        uVar7 = 0x2b;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1_00,"sub");
      if (iVar1 == 0) {
        uVar7 = 0x2d;
        goto LAB_00ee3fec;
      }
      iVar1 = strcmp(__s1,"table");
      if (iVar1 != 0) goto LAB_00ee3da8;
    }
    iVar1 = strcmp(__s1_00,"insert");
    if (iVar1 == 0) {
      uVar7 = 0x34;
      goto LAB_00ee3fec;
    }
    iVar1 = strcmp(__s1_00,"unpack");
    if (iVar1 != 0) goto LAB_00ee3da8;
  }
  uVar7 = 0x35;
LAB_00ee3fec:
  plVar6 = *(long **)(this + 8);
  lVar8 = plVar6[1];
  if ((ulong)(lVar8 * 3) >> 2 <= (ulong)plVar6[2]) {
    detail::
    DenseHashTable<Luau::AstExprCall*,std::__ndk1::pair<Luau::AstExprCall*,int>,std::__ndk1::pair<Luau::AstExprCall*const,int>,Luau::detail::ItemInterfaceMap<Luau::AstExprCall*,int>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
    ::rehash();
    lVar8 = plVar6[1];
  }
  lVar3 = *plVar6;
  uVar2 = ((ulong)param_1 >> 4 ^ (ulong)param_1 >> 9) & lVar8 - 1U;
  pAVar5 = *(AstExprCall **)(lVar3 + uVar2 * 0x10);
  if (pAVar5 != (AstExprCall *)plVar6[3]) {
    lVar4 = 1;
    do {
      if (pAVar5 == param_1) goto LAB_00ee4070;
      uVar2 = uVar2 + lVar4;
      lVar4 = lVar4 + 1;
      uVar2 = uVar2 & lVar8 - 1U;
      pAVar5 = *(AstExprCall **)(lVar3 + uVar2 * 0x10);
    } while (pAVar5 != (AstExprCall *)plVar6[3]);
  }
  lVar8 = plVar6[2];
  *(AstExprCall **)(lVar3 + uVar2 * 0x10) = param_1;
  plVar6[2] = lVar8 + 1;
LAB_00ee4070:
  *(undefined4 *)(lVar3 + uVar2 * 0x10 + 8) = uVar7;
  return 1;
}


