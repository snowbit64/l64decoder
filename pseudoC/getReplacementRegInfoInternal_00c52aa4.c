// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getReplacementRegInfoInternal
// Entry Point: 00c52aa4
// Size: 428 bytes
// Signature: undefined __thiscall getReplacementRegInfoInternal(IR_Struct * this, uint * param_1, IR_Type * * param_2, basic_string * param_3)


/* IR_Struct::getReplacementRegInfoInternal(unsigned int&, IR_Type*&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
IR_Struct::getReplacementRegInfoInternal
          (IR_Struct *this,uint *param_1,IR_Type **param_2,basic_string *param_3)

{
  undefined8 uVar1;
  undefined uVar2;
  undefined uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  byte local_80 [16];
  void *local_70;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar9 = *(long *)(this + 0x30);
  lVar8 = *(long *)(this + 0x38);
  if (lVar8 != lVar9) {
    uVar11 = 0;
    do {
      piVar10 = *(int **)(lVar9 + uVar11 * 0x38 + 0x10);
      if ((*piVar10 == 3) && ((*(IR_Struct **)(piVar10 + 2))[0x55] == (IR_Struct)0x0)) {
        uVar5 = getReplacementRegInfoInternal(*(IR_Struct **)(piVar10 + 2),param_1,param_2,param_3);
        if ((uVar5 & 1) != 0) {
          std::__ndk1::operator+("_",param_3);
                    /* try { // try from 00c52be0 to 00c52bef has its CatchHandler @ 00c52c50 */
          puVar7 = (undefined8 *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   insert((ulong)local_80,(char *)0x0);
          uVar6 = puVar7[1];
          uVar1 = puVar7[2];
          uVar2 = *(undefined *)puVar7;
          uVar3 = *(undefined *)((long)puVar7 + 1);
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          local_68 = (undefined6)*(undefined8 *)((long)puVar7 + 2);
          uStack_62 = (undefined2)uVar6;
          uStack_60 = (undefined6)((ulong)uVar6 >> 0x10);
          if ((*(byte *)param_3 & 1) != 0) {
            operator_delete(*(void **)(param_3 + 4));
          }
          *(undefined *)param_3 = uVar2;
          *(undefined *)((long)param_3 + 1) = uVar3;
          *(ulong *)((long)param_3 + 2) = CONCAT26(uStack_62,local_68);
          *(ulong *)(param_3 + 2) = CONCAT62(uStack_60,uStack_62);
          *(undefined8 *)(param_3 + 4) = uVar1;
          if ((local_80[0] & 1) != 0) {
            operator_delete(local_70);
          }
LAB_00c52b8c:
          uVar6 = 1;
          goto LAB_00c52b90;
        }
        lVar9 = *(long *)(this + 0x30);
        lVar8 = *(long *)(this + 0x38);
      }
      else {
        if (*param_1 == 0) {
          *param_2 = (IR_Type *)piVar10;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)param_3);
          goto LAB_00c52b8c;
        }
        *param_1 = *param_1 - 1;
      }
      uVar11 = (ulong)((int)uVar11 + 1);
      uVar5 = (lVar8 - lVar9 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar11 <= uVar5 && uVar5 - uVar11 != 0);
  }
  uVar6 = 0;
LAB_00c52b90:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


