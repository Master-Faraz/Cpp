  public:
      int DD, MM, YY; //   Date of birth  in Date / Month / Year

      Nested(int DD, int MM, int YY)
      {
        this->DD = DD;
        this->MM = MM;
        this->YY = YY;
      }

      void Date_Of_Birth(Nested n)
      {
        cout << n.DD << " / " << n.MM << " / " << n.YY << endl;
      }