// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXML
// Entry Point: 0087ebb8
// Size: 552 bytes
// Signature: undefined __thiscall loadXML(BehaviorDataSource * this, DomXMLFile * param_1, char * param_2)


/* BehaviorDataSource::loadXML(DomXMLFile&, char const*) */

void __thiscall
BehaviorDataSource::loadXML(BehaviorDataSource *this,DomXMLFile *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  pair pVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  int iVar5;
  undefined auVar6 [16];
  char acStack_180 [256];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  FUN_0087ede0(acStack_180,param_1,"%s.values",param_2);
  iVar2 = DomXMLFile::getNumChildren(param_1,acStack_180);
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      FUN_0087ede0(acStack_180);
      auVar6 = (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_180,0);
      FUN_0087ede0(acStack_180,auVar6._8_8_,"%s.values.value(%u)#value",param_2,iVar5);
      Properties::getFloat((Properties *)param_1,acStack_180,0.0);
      if (auVar6._0_8_ != 0) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>>>
        ::__emplace_unique_impl<std::__ndk1::pair<char_const*,float>>((pair *)(this + 0x18));
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  FUN_0087ede0(acStack_180);
  uVar4 = DomXMLFile::getNumChildren(param_1,acStack_180);
  iVar2 = (int)uVar4;
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      FUN_0087ede0(acStack_180);
      auVar6 = (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_180,0);
      FUN_0087ede0(acStack_180,auVar6._8_8_,"%s.ranges.range(%u)#min",param_2,iVar5);
      Properties::getFloat((Properties *)param_1,acStack_180,0.0);
      FUN_0087ede0(acStack_180,extraout_x1,"%s.ranges.range(%u)#max",param_2,iVar5);
      uVar4 = Properties::getFloat((Properties *)param_1,acStack_180,0.0);
      if (auVar6._0_8_ != 0) {
        pVar3 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>>>
                ::
                __emplace_unique_impl<std::__ndk1::pair<char_const*,BehaviorDataSource::RangeData>>
                          ((pair *)this);
        uVar4 = (ulong)pVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


