// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLuaValue
// Entry Point: 00bb8d0c
// Size: 1904 bytes
// Signature: undefined __thiscall getLuaValue(LuauScriptSystem * this, lua_State * param_1, int param_2, int param_3, char * param_4, Type param_5, Value * param_6)


/* LuauScriptSystem::getLuaValue(lua_State*, int, int, char const*, Value::Type, Value&) */

void __thiscall
LuauScriptSystem::getLuaValue
          (LuauScriptSystem *this,lua_State *param_1,int param_2,int param_3,char *param_4,
          Type param_5,Value *param_6)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  Value VVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  Value *pVVar13;
  ulong uVar14;
  void *pvVar15;
  char *pcVar16;
  long lVar17;
  undefined2 uVar18;
  ulong uVar19;
  Value *pVVar20;
  ulong local_470 [128];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar19 = (ulong)param_5;
  uVar8 = lua_type(param_1,param_2);
  switch(uVar8) {
  case 1:
    if ((param_5 == 0) || (param_5 == 3)) {
      iVar9 = lua_toboolean(param_1,param_2);
      uVar12 = 1;
      *(undefined4 *)(param_6 + 8) = 3;
      *param_6 = (Value)(iVar9 == 1);
      goto LAB_00bb920c;
    }
    FUN_00bb947c(local_470,0x400,
                 "Warning (script): \'%s\': Argument %d has wrong type. Expected: %s. Actual: %s",
                 param_4,param_3 + 1,*(undefined8 *)(s_valueTypeToString + uVar19 * 8),&DAT_004f55a5
                );
    pcVar16 = "expectedType == Value::VoidType || expectedType == Value::BoolType";
    iVar9 = 0x3c7;
    break;
  case 2:
    if ((param_5 == 0) || (param_5 == 7)) {
      uVar12 = lua_touserdata(param_1,param_2);
      uVar8 = 7;
LAB_00bb8f90:
      *(undefined8 *)param_6 = uVar12;
      goto LAB_00bb8f94;
    }
    FUN_00bb947c(local_470,0x400,
                 "Warning (script): \'%s\': Argument %d has wrong type. Expected: %s. Actual: %s",
                 param_4,param_3 + 1,*(undefined8 *)(s_valueTypeToString + uVar19 * 8),"Pointer");
    pcVar16 = "expectedType == Value::VoidType || expectedType == Value::PointerType";
    iVar9 = 0x417;
    break;
  case 3:
    switch(uVar19) {
    case 0:
    case 5:
      uVar6 = lua_tonumberx(param_1,param_2,(int *)0x0);
      uVar12 = 1;
      *(undefined8 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 5;
      break;
    case 1:
      uVar8 = lua_tointegerx(param_1,param_2,(int *)0x0);
      uVar12 = 1;
      *(undefined4 *)param_6 = uVar8;
      *(undefined4 *)(param_6 + 8) = 1;
      break;
    case 2:
      dVar5 = (double)lua_tonumberx(param_1,param_2,(int *)0x0);
      uVar12 = 1;
      *(int *)param_6 = (int)dVar5;
      *(undefined4 *)(param_6 + 8) = 2;
      break;
    default:
      FUN_00bb947c(local_470,0x400,
                   "Warning (script): \'%s\': Argument %d has wrong type. Expected: %s. Actual: %s",
                   param_4,param_3 + 1,*(undefined8 *)(s_valueTypeToString + uVar19 * 8),"Number");
      pcVar16 = 
      "expectedType == Value::VoidType || expectedType == Value::FloatType || expectedType == Value::DoubleType || expectedType == Value::IntType || expectedType == Value::UIntType"
      ;
      iVar9 = 0x3cb;
      goto LAB_00bb91e8;
    case 4:
      dVar5 = (double)lua_tonumberx(param_1,param_2,(int *)0x0);
      uVar12 = 1;
      *(undefined4 *)(param_6 + 8) = 4;
      *(float *)param_6 = (float)dVar5;
    }
    goto LAB_00bb920c;
  default:
    if (param_5 == 0) {
      uVar12 = 1;
      *(undefined8 *)param_6 = 0;
      *(undefined4 *)(param_6 + 8) = 0;
      goto LAB_00bb920c;
    }
    if (param_5 != 0xd) {
      FUN_00bb947c(local_470,0x400,
                   "Warning (script): \'%s\': Argument %d has wrong type. Expected: %s. Actual: %s",
                   param_4,param_3 + 1,*(undefined8 *)(s_valueTypeToString + uVar19 * 8),
                   &DAT_004cd92e);
      pcVar16 = "expectedType == Value::VoidType || expectedType == Value::ClassType";
      iVar9 = 0x423;
      break;
    }
    uVar8 = 0xd;
    *(undefined8 *)param_6 = 0;
LAB_00bb8f94:
    *(undefined4 *)(param_6 + 8) = uVar8;
    uVar12 = 1;
    *(ushort *)(param_6 + 0xc) = *(ushort *)(param_6 + 0xc) & 0xfffe;
    goto LAB_00bb920c;
  case 5:
    if ((param_5 == 0) || (param_5 == 6)) {
      uVar12 = lua_tolstring(param_1,param_2,(ulong *)0x0);
      uVar8 = 6;
      goto LAB_00bb8f90;
    }
    if (param_5 == 10) {
      uVar12 = lua_tolstring(param_1,param_2,local_470);
      *(undefined8 *)param_6 = uVar12;
      uVar12 = 1;
      *(undefined4 *)(param_6 + 8) = 10;
      param_6[0xe] = SUB41((uint)local_470[0] >> 0xf,0);
      *(short *)(param_6 + 0xc) = (short)((uint)local_470[0] << 1);
      goto LAB_00bb920c;
    }
    FUN_00bb947c(local_470,0x400,
                 "Warning (script): \'%s\': Argument %d has wrong type. Expected: %s. Actual: %s",
                 param_4,param_3 + 1,*(undefined8 *)(s_valueTypeToString + uVar19 * 8),"String");
    pcVar16 = 
    "expectedType == Value::VoidType || expectedType == Value::StringType || expectedType == Value::ByteArrayType"
    ;
    iVar9 = 0x3bd;
    break;
  case 6:
    switch(uVar19) {
    case 0:
    case 8:
switchD_00bb8f1c_caseD_0:
      puVar11 = (undefined4 *)operator_new(8);
      lua_pushvalue(param_1,param_2);
      uVar8 = lua_ref(param_1,-1);
      *puVar11 = uVar8;
      lua_settop(param_1,-2);
      uVar8 = *(undefined4 *)this;
      *(undefined4 **)param_6 = puVar11;
      *(undefined4 *)(param_6 + 8) = 8;
      uVar12 = 1;
      uVar3 = *(ushort *)(param_6 + 0xc);
      puVar11[1] = uVar8;
      *(ushort *)(param_6 + 0xc) = uVar3 & 0xfffe;
      goto LAB_00bb920c;
    default:
      FUN_00bb947c(local_470,0x400,
                   "Warning (script): \'%s\': Argument %d has wrong type. Expected: %s. Actual: %s",
                   param_4,param_3 + 1,*(undefined8 *)(s_valueTypeToString + uVar19 * 8),"Table");
      pcVar16 = 
      "expectedType == Value::VoidType || expectedType == Value::ObjectType || expectedType == Value::IntArrayType || expectedType == Value::FloatArrayType || expectedType == Value::ArrayType"
      ;
      iVar9 = 0x3e0;
      goto LAB_00bb91e8;
    case 9:
      uVar10 = lua_objlen(param_1,param_2);
      uVar19 = (ulong)uVar10 * 0x10;
      pVVar13 = (Value *)operator_new__(uVar19);
      if (uVar10 != 0) {
        lVar17 = 0;
        do {
          lVar1 = lVar17 + 0x10;
          *(undefined4 *)(pVVar13 + lVar17 + 8) = 0;
          pVVar13[lVar17 + 0xe] = (Value)0x0;
          *(undefined2 *)(pVVar13 + lVar17 + 0xc) = 0;
          lVar17 = lVar1;
        } while (uVar19 - lVar1 != 0);
        if (uVar10 != 0) {
          uVar19 = 0;
          pVVar20 = pVVar13;
          do {
            uVar19 = uVar19 + 1;
            lua_rawgeti(param_1,param_2,(int)uVar19);
            uVar14 = getLuaValue(this,param_1,-1,0,(char *)0x0,0,pVVar20);
            lua_settop(param_1,-2);
            if ((uVar14 & 1) == 0) {
              operator_delete__(pVVar13);
              goto LAB_00bb9208;
            }
            pVVar20 = pVVar20 + 0x10;
          } while (uVar10 != uVar19);
        }
      }
      uVar8 = 9;
      VVar7 = SUB41(uVar10 >> 0xf,0);
      uVar18 = (undefined2)(uVar10 << 1);
      *(Value **)param_6 = pVVar13;
      goto LAB_00bb9458;
    case 0xb:
      uVar10 = lua_objlen(param_1,param_2);
      uVar19 = (ulong)uVar10;
      pvVar15 = operator_new__(uVar19 << 2);
      if (uVar10 != 0) {
        uVar14 = 0;
        do {
          uVar2 = uVar14 + 1;
          lua_rawgeti(param_1,param_2,(int)uVar2);
          uVar8 = lua_tointegerx(param_1,-1,(int *)0x0);
          *(undefined4 *)((long)pvVar15 + uVar14 * 4) = uVar8;
          lua_settop(param_1,-2);
          uVar14 = uVar2;
        } while (uVar19 != uVar2);
      }
      uVar8 = 0xb;
      break;
    case 0xc:
      uVar10 = lua_objlen(param_1,param_2);
      uVar19 = (ulong)uVar10;
      pvVar15 = operator_new__(uVar19 << 2);
      if (uVar10 != 0) {
        uVar14 = 0;
        do {
          uVar2 = uVar14 + 1;
          lua_rawgeti(param_1,param_2,(int)uVar2);
          dVar5 = (double)lua_tonumberx(param_1,-1,(int *)0x0);
          *(float *)((long)pvVar15 + uVar14 * 4) = (float)dVar5;
          lua_settop(param_1,-2);
          uVar14 = uVar2;
        } while (uVar19 != uVar2);
      }
      uVar8 = 0xc;
    }
    VVar7 = SUB81(uVar19 >> 0xf,0);
    *(void **)param_6 = pvVar15;
    uVar18 = (undefined2)((int)uVar19 << 1);
LAB_00bb9458:
    uVar12 = 1;
    *(undefined4 *)(param_6 + 8) = uVar8;
    param_6[0xe] = VVar7;
    *(undefined2 *)(param_6 + 0xc) = uVar18;
    goto LAB_00bb920c;
  case 7:
    if ((param_5 & 0xfffffff7) == 0) goto switchD_00bb8f1c_caseD_0;
    FUN_00bb947c(local_470,0x400,
                 "Warning (script): \'%s\': Argument %d has wrong type. Expected: %s. Actual: %s",
                 param_4,param_3 + 1,*(undefined8 *)(s_valueTypeToString + uVar19 * 8),"Function");
    pcVar16 = "expectedType == Value::VoidType || expectedType == Value::ObjectType";
    iVar9 = 0x40c;
    break;
  case 8:
    if ((param_5 == 0) || (param_5 == 0xd)) {
      uVar12 = lua_touserdata(param_1,param_2);
      uVar8 = 0xd;
      goto LAB_00bb8f90;
    }
    FUN_00bb947c(local_470,0x400,
                 "Warning (script): \'%s\': Argument %d has wrong type. Expected: %s. Actual: %s",
                 param_4,param_3 + 1,*(undefined8 *)(s_valueTypeToString + uVar19 * 8),"Class");
    pcVar16 = "expectedType == Value::VoidType || expectedType == Value::ClassType";
    iVar9 = 0x41d;
  }
LAB_00bb91e8:
  DebugUtil::message((char *)0x0,(char *)local_470,pcVar16,
                     "T:/src/base/scripting/lua/LuauScriptSystem.cpp",iVar9);
  checkYieldState();
  printCFunctionCallstack(this,*(lua_State **)(this + 8),param_4,1);
LAB_00bb9208:
  uVar12 = 0;
LAB_00bb920c:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


