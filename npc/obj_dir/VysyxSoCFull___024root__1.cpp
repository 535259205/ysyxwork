// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_A_AOI21_X1_ZN__DOT__A) 
                 | (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_8))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag 
        = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_ready_AOI221_X1_B1__DOT__ZN;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_vaild_reg_p__DOT__D 
        = (1U & (~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_vaild_reg_p_D_NOR4_X1_ZN_A2_AOI22_X1_ZN__DOT__A1) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_vaild_reg_p_D_NOR4_X1_ZN_A2_AOI22_X1_ZN__DOT__A2)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd_vaild_reg_p_D_NOR4_X1_ZN_A2_AOI22_X1_ZN__DOT__B))) 
                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_ar_valid_AND2_X1_ZN_A1_AND2_X1_A1_A2_XNOR2_X1_ZN_B_OAI21_X1_B2_ZN_XNOR2_X1_A_ZN_NOR4_X1_A3_ZN_AOI211_X1_B__DOT__C1)))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_ready 
        = (1U & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_ar_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_ar_flag))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__mem_flag) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1));
}

extern const VlUnpacked<CData/*0:0*/, 32> VysyxSoCFull__ConstPool__TABLE_hef4d8c69_0;
extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h4c61b0e2_0;
extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h6b526b42_0;
extern const VlUnpacked<CData/*2:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_h859199ce_0;
extern const VlUnpacked<IData/*31:0*/, 8> VysyxSoCFull__ConstPool__TABLE_h7556d761_0;

void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*9:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*3:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*3:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_payload_addr 
        = ((((((((2U & ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_OAI211_X1_ZN_B_NAND4_X1_ZN_A1_NAND3_X1_ZN_A1_AND3_X1_ZN__DOT__A2) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshOKZZleXqzcwxdUjQq0YqPwrqy3B5FNfYOo9O3rlA__DOT__B1)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_OAI211_X1_ZN_B_NAND4_X1_ZN_A1_NAND3_X1_ZN_A1_AND3_X1_ZN__DOT__A2) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshOKZZleXqzcwxdUjQq0YqPwrqy3B5FNfYOo9O3rlA__DOT__B1)))) 
                        << 1U)) | (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshGSoI2mcpRzwuIFsQFMso9wKr4lQMcWynNATcl6GS__DOT__A) 
                                            | (~ ((~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D_OAI211_X1_ZN_B_NAND4_X1_ZN_A1_NAND3_X1_ZN_A1_AND3_X1_ZN__DOT__A1) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshwwYUyRxyXGApIwGbzdg6qhhX9xSQnCRVr0zWnpWX__DOT__B))) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))))))) 
                << 6U) | (((2U & ((~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1) 
                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshpGssiBAkAU8ffILMkky54ruZL5B1RA7QpwOgRC94__DOT__B1) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshpGssiBAkAU8ffILMkky54ruZL5B1RA7QpwOgRC94__DOT__B2)))) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshpGssiBAkAU8ffILMkky54ruZL5B1RA7QpwOgRC94__DOT__B1) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshpGssiBAkAU8ffILMkky54ruZL5B1RA7QpwOgRC94__DOT__B2)))) 
                                  << 1U)) | (1U & (~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh7q1QLgygcuE7A7IJWr3QcInniA2HBfszMTyK00GA__DOT__A) 
                                                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshTGc6WytAUdbGIdp1FdA3fOBzGdB21CLQRTBjwx3q__DOT__A1) 
                                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshTGc6WytAUdbGIdp1FdA3fOBzGdB21CLQRTBjwx3q__DOT__A3) 
                                                             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0CJRlU30krLwXkAOaJ0kgDoruWGoyH8j5pxu8syR__DOT__B))))))))) 
                          << 4U)) | ((((2U & ((~ ((~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshQhWmNMMMyqoTdWkmVbITql5YhI7JsL4Q9HiNotrK__DOT__B2) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshQhWmNMMMyqoTdWkmVbITql5YhI7JsL4Q9HiNotrK__DOT__B1)))) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshQhWmNMMMyqoTdWkmVbITql5YhI7JsL4Q9HiNotrK__DOT__B2) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshQhWmNMMMyqoTdWkmVbITql5YhI7JsL4Q9HiNotrK__DOT__B1)))) 
                                              << 1U)) 
                                       | (1U & (~ (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshIBnCjuTV2R7vovH9nDeiITlUfCVBSt6ZFB9apOah__DOT__A1) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshIBnCjuTV2R7vovH9nDeiITlUfCVBSt6ZFB9apOah__DOT__A2))) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshIBnCjuTV2R7vovH9nDeiITlUfCVBSt6ZFB9apOah__DOT__ZN)))))) 
                                      << 2U) | ((2U 
                                                 & ((~ 
                                                     ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                      | ((~ 
                                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhyFTbRMbKiIHWBMDNh3wpoTzdUzBRDJwoRcBoHla__DOT__A1) 
                                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshbsfIMltGdGMYmYranXVLNzIK51OYJPfzcC4LHbuI__DOT__B))) 
                                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshhyFTbRMbKiIHWBMDNh3wpoTzdUzBRDJwoRcBoHla__DOT__A1) 
                                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshbsfIMltGdGMYmYranXVLNzIK51OYJPfzcC4LHbuI__DOT__B))))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      ((~ 
                                                        (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshJr6GqMWnX3IBfVUBiEmm4zGEwpJPwGYpfrtco0AC__DOT__A2)) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshbHcY2yPNvF8tirBKNeYYOveG8ymFQNHIBjDULiEE__DOT__B1)) 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                                                       | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshJr6GqMWnX3IBfVUBiEmm4zGEwpJPwGYpfrtco0AC__DOT__A2)) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshbHcY2yPNvF8tirBKNeYYOveG8ymFQNHIBjDULiEE__DOT__B1)))))))) 
             << 0x00000018U) | ((((((2U & ((~ ((~ (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshI4AWEX06nTr8C21kLaL9BlvXoNaoPJ9XmnMRYBNK__DOT__B2) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshI4AWEX06nTr8C21kLaL9BlvXoNaoPJ9XmnMRYBNK__DOT__B1)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshI4AWEX06nTr8C21kLaL9BlvXoNaoPJ9XmnMRYBNK__DOT__B2) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshI4AWEX06nTr8C21kLaL9BlvXoNaoPJ9XmnMRYBNK__DOT__B1)))) 
                                           << 1U)) 
                                    | (1U & (~ ((~ 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshJ3Fx1ZX4mIdHTR9WQ1bnlJCDcNA9xFBSvxe45ANz__DOT__A) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshg38AHJpFILqRU7xYYfYPLKU4uVK7cRuaQAyXW5Wa__DOT__B2) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshg38AHJpFILqRU7xYYfYPLKU4uVK7cRuaQAyXW5Wa__DOT__B1)))))) 
                                   << 6U) | (((2U & 
                                               ((~ 
                                                 ((~ 
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0jD4l1H9XhNfmHAjdhBk50VZMDB4Aaby4rabA78j__DOT__B2) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0jD4l1H9XhNfmHAjdhBk50VZMDB4Aaby4rabA78j__DOT__B1)) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0jD4l1H9XhNfmHAjdhBk50VZMDB4Aaby4rabA78j__DOT__B2) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhsh0jD4l1H9XhNfmHAjdhBk50VZMDB4Aaby4rabA78j__DOT__B1)))) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshAyVEvERXpRLiKYS9RyQLagaN1BTcBpPFE5dsivrQ__DOT__A) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshvyN3HVXl0Q1YvpaVuX3jf6RQ3TGpU7MKWQT27t0b__DOT__A1) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshbB7fkEi3FzoRO3ybL9yFLs1Bi8sAaZt0UPbwIIqE__DOT__B))))))) 
                                             << 4U)) 
                                 | ((((2U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                 | ((~ 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshHfUH6alJbJCIZQjYcaRvXJ317USzfpMUs3hXKBqb__DOT__A2) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshMGtCt7RueCm6Q6ZTLa0zvXuEvoFy9JHkRyXt56yn__DOT__A2) 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshHfUH6alJbJCIZQjYcaRvXJ317USzfpMUs3hXKBqb__DOT__A1)))) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshHfUH6alJbJCIZQjYcaRvXJ317USzfpMUs3hXKBqb__DOT__A1) 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshHfUH6alJbJCIZQjYcaRvXJ317USzfpMUs3hXKBqb__DOT__A2) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshMGtCt7RueCm6Q6ZTLa0zvXuEvoFy9JHkRyXt56yn__DOT__A2)))))) 
                                             << 1U)) 
                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1) 
                                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshMGtCt7RueCm6Q6ZTLa0zvXuEvoFy9JHkRyXt56yn__DOT__A2) 
                                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b2__05d_reg_p_D___VhshNSTiZpjQEZpbp2GLm6KVJiGONiLYYVb3vbmAcubh__DOT__B2)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_62)))))) 
                                     << 2U) | ((2U 
                                                & ((~ 
                                                    ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                     | ((~ 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshk4MZRRexUvVpyPIswfLuDPBbHMWV11M5dAhKOIl9__DOT__A1) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshcycq51u8yvSM9DbB66eXz39B8bCGEtvt4EvqfU38__DOT__B))) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshk4MZRRexUvVpyPIswfLuDPBbHMWV11M5dAhKOIl9__DOT__A1) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshcycq51u8yvSM9DbB66eXz39B8bCGEtvt4EvqfU38__DOT__B))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b16__05d_reg_p_D___Vhshk4MZRRexUvVpyPIswfLuDPBbHMWV11M5dAhKOIl9__DOT__A3) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshTS7DXJXVTCYjII22NZhW16Bpzg2s1omGVVmWGTWG__DOT__B2) 
                                                         & (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_42))))))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((~ ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshmOqXw2a5NiY19hJwYDKYctM7cATxZmgGofcQBSWg__DOT__A3) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshvbE4AnKAh4MziqX3EkKHAa7Vw40jGo3At9u6qD8A__DOT__B1)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshmOqXw2a5NiY19hJwYDKYctM7cATxZmgGofcQBSWg__DOT__A3) 
                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshvbE4AnKAh4MziqX3EkKHAa7Vw40jGo3At9u6qD8A__DOT__B1)))) 
                        << 1U)) | (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshH4BszBkBwiRWq1BtfAQJuRXYApZIeOAYSAC8Oy4H__DOT__ZN) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshBj5ilkzkmLLeiPuGZfY7lJcgwXOasC6nOtPfoWjT__DOT__A1) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshH4BszBkBwiRWq1BtfAQJuRXYApZIeOAYSAC8Oy4H__DOT__C))))))) 
                << 6U) | ((((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshmOqXw2a5NiY19hJwYDKYctM7cATxZmgGofcQBSWg__DOT__A4) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNveQgkMszABXBULMDnHZiAuhufqgKAcz9O6MLFSh__DOT__B1)))) 
                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshmOqXw2a5NiY19hJwYDKYctM7cATxZmgGofcQBSWg__DOT__A4) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshNveQgkMszABXBULMDnHZiAuhufqgKAcz9O6MLFSh__DOT__B1))) 
                           << 5U) | (0x00000010U & 
                                     ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshVH4U4xTvWcSXWsSF2LQkWx3t14BQ1nvppoAZRBoG__DOT__ZN) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshno1TocTrsfPMZ4OrYDyapCsJQafHPxPgn9Yu7Bqz__DOT__A1) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshVH4U4xTvWcSXWsSF2LQkWx3t14BQ1nvppoAZRBoG__DOT__B))))) 
                                      << 4U)))) | (
                                                   (((2U 
                                                      & ((~ 
                                                          ((~ 
                                                            ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshno1TocTrsfPMZ4OrYDyapCsJQafHPxPgn9Yu7Bqz__DOT__A3) 
                                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshA01Tochs44szvuyIAmCKcbr5AYgE2X587q7bl25L__DOT__B1) 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshA01Tochs44szvuyIAmCKcbr5AYgE2X587q7bl25L__DOT__B2)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           ((~ 
                                                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshsBR8DGMtft3AwlF93DtmeIcQeWtlkGdHnbrEAqQk__DOT__A) 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___Vhshz1eNEKc89SV4ei1KDhIQm9sXbPU4XEqZv9mTo43B__DOT__B2) 
                                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshlH0Txnt3aDM51WB0o6mCkABH24DaASdCfriHZyWh__DOT__ZN)))))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((~ 
                                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshlH0Txnt3aDM51WB0o6mCkABH24DaASdCfriHZyWh__DOT__A) 
                                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshlH0Txnt3aDM51WB0o6mCkABH24DaASdCfriHZyWh__DOT__B) 
                                                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                                  | (~ 
                                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshAv0S22WlSBgiBUgyGlamyYNTz8KeTcdCyDrBg6nT__DOT__A) 
                                                                      | ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_111)) 
                                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhshAv0S22WlSBgiBUgyGlamyYNTz8KeTcdCyDrBg6nT__DOT__C)))))))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_111)) 
                                                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                                | (~ 
                                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhsheGPWkZ2E3vg9o6XG51BM9jOMLGCaGz7aujjxsPeJ__DOT__A) 
                                                                    | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_23)))))))))) 
             << 8U) | (((((2U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b0__05d_reg_p_D___VhsheGPWkZ2E3vg9o6XG51BM9jOMLGCaGz7aujjxsPeJ__DOT__B) 
                                     | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh4fkAJMfzx15qParZYUyFaFBAOXZWV2OO68JOdKyI__DOT__A1) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___Vhsh1W3BcBK9zTmToPqiVP9nmcL1dAczAuqSBqr9EyH1__DOT__B))))) 
                                 << 1U)) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshqvyiIzebOWAeZj6nMP5z7zDTLo8Wj0ABZK7NTCT4__DOT__A1) 
                                            & ((~ (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshzbGyEBWRMlJ0EG014FYBklQBt36DV6Ln3NuF1l4a__DOT__B)) 
                                                   & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b5__05d_reg_p_D___VhshYZBgiozreJaAA3Twn5cg02i3lkjXsqoRVM5faAJJ__DOT__ZN)) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21___VhshQHN3ygNNOD9CIK1eq8emqdh85ThQuFkqs5LDj5TJ__DOT__C)))) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)))) 
                         << 6U) | (((2U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21___VhshQHN3ygNNOD9CIK1eq8emqdh85ThQuFkqs5LDj5TJ__DOT__C)) 
                                               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                  | (~ 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1_ZN_AOI21_X1_A_ZN_OAI21_X1_B1_ZN_AND2_X1_A2_ZN_AOI221_X1_A__DOT__B) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_116)))))) 
                                           << 1U)) 
                                    | (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1_ZN_AOI21_X1_A_ZN_OAI21_X1_B1_ZN_AND2_X1_A2__DOT__ZN) 
                                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                   | (~ 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1_ZN_AOI21_X1_A_ZN_OAI21_X1_B1_ZN_AND2_X1_A2__DOT__A2) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1_ZN_AOI21_X1_A_ZN_OAI21_X1_B1_ZN_AND2_X1_A2__DOT__A1)))))))) 
                                   << 4U)) | ((((2U 
                                                 & ((~ 
                                                     ((~ 
                                                       (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1_ZN_AOI21_X1_A_ZN_AOI21_X1_B2__DOT__B2) 
                                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1_ZN_AOI21_X1_A_ZN_AOI21_X1_B2__DOT__B1)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1))) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1_ZN_AOI21_X1_A_ZN_AOI21_X1_B2__DOT__B2) 
                                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1_ZN_AOI21_X1_A_ZN_AOI21_X1_B2__DOT__B1)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1__DOT__A) 
                                                          ^ 
                                                          (~ 
                                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3_ZN_AOI21_X1_B1__DOT__B2) 
                                                            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_2_B2_NAND3_X1_A3__DOT__A3)) 
                                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_payload_strb_OAI21_X1_ZN_B2_XNOR2_X1_B_A_NAND2_X1_ZN__DOT__ZN))))))))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ 
                                                      ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__com_grp_rd__05b14__05d_reg_p_D_OAI211_X1_ZN_A_AOI211_X1_ZN_C1_AOI22_X1_A1_A2_AND2_X1_ZN__DOT__A1))) 
                                                     << 1U)) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A2) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_aw_valid_AND2_X1_ZN_A1_AND2_X1_A1__DOT__A1)))))));
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_r_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_r_valid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__rsel)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_ready)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_r_ready)));
    __Vtableidx4 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_ready) 
                     << 4U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_ar_valid) 
                                << 3U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg)));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl_r_sel 
        = VysyxSoCFull__ConstPool__TABLE_hef4d8c69_0
        [__Vtableidx4];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel 
        = (((0x80000000U <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_payload_addr) 
            & (0x80ffffffU > vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_payload_addr))
            ? 0U : (((0x10000000U <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_payload_addr) 
                     & (0x1000ffffU > vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_payload_addr))
                     ? 1U : (((0x11000000U <= vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_payload_addr) 
                              & (0x1100ffffU > vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_payload_addr))
                              ? 2U : 3U)));
    if ((2U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__mmio__DOT__w_data 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_w_payload_data;
        __Vtableidx7 = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_w_payload_strb;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__mmio__DOT__w_data = 0U;
        __Vtableidx7 = 0U;
    }
    if ((8U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))) {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_w_payload_data;
        __Vtableidx9 = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_w_payload_strb;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio__DOT__w_data = 0U;
        __Vtableidx9 = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__mmio_w_len 
        = VysyxSoCFull__ConstPool__TABLE_h4c61b0e2_0
        [__Vtableidx7];
    vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__mmio_w_len 
        = VysyxSoCFull__ConstPool__TABLE_h4c61b0e2_0
        [__Vtableidx9];
    __Vtableidx11 = ((1U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_w_payload_strb)
                      : 0U);
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem_w_len 
        = VysyxSoCFull__ConstPool__TABLE_h6b526b42_0
        [__Vtableidx11];
    __Vtableidx12 = ((4U & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_w_payload_strb)
                      : 0U);
    vlSelfRef.ysyxSoCFull__DOT__axint__DOT__mmio_w_len 
        = VysyxSoCFull__ConstPool__TABLE_h4c61b0e2_0
        [__Vtableidx12];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid 
        = (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_valid) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__mem__DOT__wen 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_w_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_0_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_valid));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_valid));
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid 
            = vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_w_ready;
    } else if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid 
            = vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_1_aw_ready;
    } else if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))) {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid 
            = vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_2_aw_ready;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid 
            = vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_aw_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready;
        vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready 
            = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiOut_3_aw_ready;
    }
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_w_ready_AOI221_X1_B1__DOT__ZN 
        = (1U & (~ ((IData)(vlSelfRef.reset) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_valid)) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_ready) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_r_valid))))));
    __Vtableidx6 = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_wantStart) 
                        << 4U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_0_r_valid) 
                                   << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__pc_1_axi4lite_r_ready) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_ar_valid) 
                          << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT___zz_1))) 
                     << 5U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__AxiIn_1_aw_valid) 
                                << 4U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_w_ready) 
                                           << 3U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg))));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext 
        = VysyxSoCFull__ConstPool__TABLE_h859199ce_0
        [__Vtableidx6];
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__grp_1__DOT__rd_vaild 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_com_grp_rd_vaild) 
           & ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext)) 
              & (5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateReg))));
    __Vtableidx2 = vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext;
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__ctrl__DOT__s_stateNext_string 
        = VysyxSoCFull__ConstPool__TABLE_h7556d761_0
        [__Vtableidx2];
}

void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__uart1__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_b_ready)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__uart2__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_b_ready)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__aximem_1__DOT__axi4lite_b_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__aximem_1_axi4lite_b_valid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_b_ready) 
              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel))));
    vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_halfPipe_fire 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__axint__DOT__slaveFactory_writeJoinEvent_translated_haltWhen_rValid) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_b_ready)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT__wsel)) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1__DOT__axi4lite_b_valid_AOI21_X1_B1__DOT__ZN 
        = (1U & (~ ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__axiarbiter_1__DOT___zz_AxiIn_1_b_valid) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__soc__DOT__encode_1_axi4lite_b_ready)))));
}

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x000000000000000bULL & vlSelfRef.__VnbaTriggered[0U])) {
        VysyxSoCFull___024root___nba_comb__TOP__2(vlSelf);
    }
}

void VysyxSoCFull___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void VysyxSoCFull___024root___eval_triggers_vec__act(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VysyxSoCFull___024root___eval_phase__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VysyxSoCFull___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VysyxSoCFull___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VysyxSoCFull___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool VysyxSoCFull___024root___eval_phase__nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VysyxSoCFull___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VysyxSoCFull___024root___eval_nba(vlSelf);
        VysyxSoCFull___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VysyxSoCFull___024root___eval_phase__ico(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/ysyx_soc/ysyxSoCFull.v", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VysyxSoCFull___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/ysyx_soc/ysyxSoCFull.v", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ylqt/study/YSYX_data/ysyx-workbench/abstract-machine/../npc/vsrc_npc_net/ysyx_soc/ysyxSoCFull.v", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = VysyxSoCFull___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VysyxSoCFull___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
