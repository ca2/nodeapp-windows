#pragma once


namespace draw2d_gdi
{


   class CLASS_DECL_DRAW2D_GDI font : 
      virtual public ::draw2d_gdi::object,
      virtual public ::draw2d::font
   {
   public:


      font(::aura::application * papp);
      virtual ~font();


      operator HFONT() const;
      virtual int GetLogFont(LOGFONTW* pLogFont);


      virtual void construct(const ::draw2d::font & fontParam);


      virtual bool CreateFontIndirect(const LOGFONTW* lpLogFont);
      virtual bool CreateFont(int nHeight, int nWidth, int nEscapement, int nOrientation, int nWeight, BYTE bItalic, BYTE bUnderline, BYTE cStrikeOut, BYTE nCharSet, BYTE nOutPrecision, BYTE nClipPrecision, BYTE nQuality, BYTE nPitchAndFamily, const char * lpszFacename);
      virtual bool CreatePointFont(int nPointSize, const char * lpszFaceName, ::draw2d::graphics * pgraphics = NULL);
      virtual bool CreatePointFontIndirect(const LOGFONTW* lpLogFont, ::draw2d::graphics * pgraphics = NULL);


      virtual void dump(dump_context & dumpcontext) const;

      
      virtual bool create();


   };


} // namespace draw2d_gdi





