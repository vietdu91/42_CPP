#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public:
		Fixed();
		Fixed(int const nb);
		Fixed(float const nb);
		~Fixed();

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;

	private:
		int		nb_fixed;
		static int const floatPartBits;
};

#endif
